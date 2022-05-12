#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const double Package_price = 99.0;
    int units_sold, without_discount;

    cout << "How many units were sold?: ";
    cin >> units_sold;

    without_discount = units_sold * Package_price;

    cout << setprecision(2) << fixed;

    if (units_sold >= 0 && units_sold <=9)
    {
        cout << "Total cost for " << units_sold << " units = $" << without_discount << endl;
    }
    else if (units_sold >= 10 && units_sold <=19)
    {
        cout << "Total cost for " << units_sold << " units = $" << (without_discount - without_discount * .20) << endl;
    }
    else if (units_sold >= 20 && units_sold <= 49)
    {
        cout << "Total cost for " << units_sold << " units = $" << (without_discount - without_discount * .30) << endl;
    }
    else if (units_sold >=50 && units_sold <=99)
    {
        cout << "Total cost for " << units_sold << " units = $" << (without_discount - without_discount * .40) <<endl;
    }
    else if (units_sold >=100)
    {
        cout << "Total cost for " << units_sold << " units = $" << (without_discount - without_discount * .50) <<endl;
    }
    else 
    {
        cout << "Oops. Return to the program again." << "choose a number greater than 0." << endl;
    }
    cout << endl;
}