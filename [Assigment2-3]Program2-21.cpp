#include <iostream>
using namespace std;

int main()
{
    int h, ot, ph, pot, total1, total2, totalWhole;
    h = 40;
    ot = 10;
    ph = 18.25;
    pot = 27.78;

    cout << "Employee has worked " << h << " regular hours and " << ot << " overtime hours this week.\n";
    total1 = h * ph;
    cout << "The total pay for regular hours worked is " << total1 << ".\n";
    total2 = ot * pot;
    cout << "The total pay for overtime hours worked is " << total2 << ".\n";
    totalWhole = total1 + total2;
    cout << "The total wages earned is " << totalWhole << ".";
    return 0;
}