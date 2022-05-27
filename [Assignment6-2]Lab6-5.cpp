#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;
    cout << "Enter numbers: ";
    cin >> n;
    do
        if (n % 2 == 1)
            sum += n;
        while(cin >> n and n % 2 == 1);
        cout << "Sum of odd numbers is " << sum << endl;
        return 0;
}