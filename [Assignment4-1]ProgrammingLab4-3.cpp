#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int minweight = 0, maxweight = 20, mindist = 10, maxdist = 3000;
    float packageweight, distance, totalcharges;

    cout << "\nWhat is the weight of the package?: ";
    cin >> packageweight;

    if (packageweight <= minweight || packageweight > maxweight)
    {
        cout << "\nPackage weight must be more than 0kg and less than 20kg.\n"
        "Return the program and try again.\n" << endl;
    }
    else
    {
        cout << "\nDistance?: ";
        cin >> distance;

        if (distance < mindist || distance > maxdist)
        {
            cout << "Return to program and try again.\n" << endl;
        }
    else
    {
        if(packageweight <= 2)
        totalcharges = (distance / 500) * 1.10;
        else if (packageweight > 2 && packageweight <=6)
        totalcharges = (distance / 500) * 2.20;
        else if (packageweight > 6 && packageweight <= 10)
        totalcharges = (distance / 500) * 3.70;
        else if (packageweight > 10 && packageweight <= 20)
        totalcharges = (distance / 500) * 4.80;

        cout << setprecision(2) << fixed
        << "Total charges are $" << totalcharges << "\nFor a distance of " << distance <<  " miles\nand a total weight of " << packageweight << "kg.\n" << endl;
    }

    }
    return 0;
}