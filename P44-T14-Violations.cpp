#include "ArrayTemplate.h"
#include "Date.h"
#include "Violation.h"
#include "Driver.h"

int main()
{
    
    int NDrivers = 3;       //Кількіть водіїв в базі = Розмір масиву
    Driver* arrDrivers = new Driver[3]{
        { "Pupkin Anton Petrovych", "AX1234AX", 2, new Violation[2]{
            {{1, 1, 2000}, "Speed 200 km/h", 9999},
            {{12, 5, 2025}, "Parking", 1000}
        } },
        {
            "Shevchenko Mykola Olehovych", "BI7777IO",1,  new Violation[1]{
                {{11, 5, 2025}, "Driving under the influence of alcohol", 25000}
         } },
        {
            "Sumkina Kateryna Victorivna", "AX7654CT", 1, new Violation[1]{
                {{11, 5, 2025}, "Parking", 600}
        } }
    };
    //============================================================================

    int menu = 0;
    Driver tmpD;

    do
    {
        cout << "======================================\n";
        cout << "\t MENU:\n";
        cout << "======================================\n";
        cout << "\t 0.Exit\n";
        cout << "\t 1.List of drivers\n";
        cout << "\t 2.Add a new driver\n";
        cout << "\t 3.Find driver by number of car\n";
        cout << "======================================\n";
        cout << ">>>";
        cin >> menu;

        switch (menu)
        {
        default: cout << "Error!!!\n"; break;
        case 0: cout << "Good bye! =) \n"; break;
        case 1:
            if (NDrivers == 0) cout << "List is empty!\n"; break;
            for (int i = 0; i < NDrivers; i++)
            {
                arrDrivers[i].printDriver();
            }
            break;
        case 2:
            cin.ignore();
            tmpD.fillDriver();
            addItemBack(arrDrivers, NDrivers, tmpD);
            break;
        case 3:
        {
            char car[10] = "";
            cout << "Input number of car (AX0000AX): "; cin >> car;
            for (int i = 0; i < NDrivers; i++)
            {
                if (stricmp(arrDrivers[i].carNumber, car) == 0) {
                    arrDrivers[i].printDriver();
                    cout << "Final fine: " << arrDrivers[i].calcTotalFines() << endl;
                    break;
                }
            }
        }break;
        }

    } while (menu != 0);

}

