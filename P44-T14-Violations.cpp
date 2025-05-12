#include "ArrayTemplate.h"
#include "Date.h"
#include "Violation.h"
#include "Driver.h"

int main()
{
    //Date myDay = { 1, 1, 2000 };
    //Date now; // 0 0 0
    //now.getNowDate(); // 12 05 2025
    //myDay.printDate();
    //now.printDate();
    //cout << "============================\n";
    //cout << myDay.toString() << endl;
    //cout << myDay.toString("%Y %m %d") << endl;

   /* Violation a{{1, 1, 2000}, "Speed 200 km/h", 5000};
    Violation b; // {0 0 0}, "", 0

    b.fillViol();

    cout << "=============================\n";
    a.printViol();
    b.printViol(); */

    Driver a{ "Pupkin Anton Petrovich", "AX1234AX", 2, new Violation[2]{
        {{1, 1, 2000}, "Speed 200 km/h", 9999},
        {{12, 5, 2025}, "Parking", 1000}
    } };

    Driver b; // "", "", 0, nullptr
    b.fillDriver();
    cout << "\n\n\n";

    a.printDriver();
    b.printDriver();

}

