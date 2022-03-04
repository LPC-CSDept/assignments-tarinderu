#include <iostream> 
#include <iomanip>
using namespace std;

int main()
{
    const int weightmin = 0, weightmax = 20, distmin = 10, distmax = 3000;
    float packageweight, distance, total_charges;

    cout << "\nWhat is the weight in kg of the package?: ";
    cin >> packageweight;

    if (packageweight <= weightmin || packageweight > weightmax)
    {
        cout << "\nPackages weight must be in between 0kg and 20kg\n" << endl;
    }
    else 
    {
        cout << "\nDistance the package is going?: ";
        cin >> distance;

        if (distance < distmin || distance > distmax)
        {
            cout << "\nDistance must be in between 0 miles and 3000 miles\n" << endl;
        }
        else 
        {
            if (packageweight <= 2)
                total_charges = (distance / 500) * 1.10;
            else if (packageweight > 2 && packageweight <= 6)
                total_charges = (distance / 500) * 2.20;
            else if (packageweight > 6 && packageweight <= 10)
                total_charges = (distance / 500) * 3.70;
            else if (packageweight > 10 && packageweight <=20)
                total_charges = (distance / 500) * 4.80;
            
            cout << setprecision(2) << fixed 
                << "Total Charges are $"
                << total_charges
                << "\nFor a distance of "
                << distance
                << " miles\nand a total weight of "
                << packageweight
                << "kg.\n"
                << endl;
        }
    }
    return 0;
}