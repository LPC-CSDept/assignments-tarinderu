#include <iostream>
using namespace std;

int main()
{
    int NumofMonths = 3;
    string mon1, mon2, mon3;

    float rainmon1, rainmon2, rainmon3, total, average;

    cout << "Enter the name of the first month: ";
    cin >> mon1;
    cout << "How many inches did it rain for " << mon1 << "?: ";
    cin >> rainmon1;

    cout << "Enter the name for the second month: ";
    cin >> mon2;
    cout << "How many inches did it rain for " << mon2 << "?: ";
    cin >> rainmon2;

    cout << "Enter the name for the third month: ";
    cin >> mon3;
    cout << "How many inches did it rain for " << mon3 << "?: ";
    cin >> rainmon3;

    cout << "In " << mon1 << " it rained " << rainmon1 << " inches.\n";
    cout << "In " << mon2 << " it rained " << rainmon2 << " inches.\n";
    cout << "In " << mon3 << " it rained " << rainmon3 << " inches.\n";

    total = rainmon1 + rainmon2 + rainmon3;
    average = total / NumofMonths;

    cout << "\nThe average rainfall for ";
    cout << mon1 << ", ";
    cout << mon2 << ", and ";
    cout << mon3 << " is ";
    cout << average << " inches.\n" << endl;
    
    cout << "\nThe total rainfall for ";
    cout << mon1 << ", ";
    cout << mon2 << ", and ";
    cout << mon3 << " is ";
    cout << total << " inches.\n" << endl;

    return 0;
}