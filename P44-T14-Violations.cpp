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


}

