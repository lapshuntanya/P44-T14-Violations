#include "ArrayTemplate.h"
#include "Date.h"
#include "Violation.h"

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

    Violation a{ {1, 1, 2000}, "Speed 200 km/h", 5000 };
    Violation b; // {0 0 0}, "", 0

    b.fillViol();

    cout << "=============================\n";
    a.printViol();
    b.printViol();

}

