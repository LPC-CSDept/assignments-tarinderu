#include <iostream>
using namespace std;

int main()
{
    int input[100], cout, i, min;
    cout << "Enter how many numbers there are\n";
    cin >> count;
    cout << "Enter" << count << " numbers \n";
    for (i = 0; i < count; i++_)
    {
        cin >> input[i];
    }
    min = input [0];
    for(i=0; i < count; i++)
    {
        if(input[i] < min)
        {
            min = input[i];
        }
    }
    cout << "Minimum value\n" << min;
    return 0;
}
