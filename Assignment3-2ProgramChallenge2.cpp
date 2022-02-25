#include <iostream>
using namespace std;

int main()
{
    int males, females, total, permales, perfemales;

    cout << "How many students are in the class?: ";
    cin >> total;
    cout << "How many from the total number of students are males?: ";
    cin >> males;
    cout << "How many from the total number of students are females?: ";
    cin >> females;
    permales = (males/static_cast <float> (total)) * 100;
    perfemales = (males/static_cast <float> (total)) * 100;
    cout << "The percentage of males in the class are " << permales << " %.\n";
    cout << "The percentage of females in the class are " << perfemales << " %.\n";
    return 0;
}