#include <iostream>
using namespace std;

int prime(int strt, int end)
{
    bool isprime;
    int count;
    while (strt<end)
    {
        isprime=true;
        if (strt == 0 || strt == 1)
        {
            isprime = false;
        }
        for (int num = 2; num <= strt/2; ++num)
        {
            if (strt % num == 0)
            {
                isprime = false;
                break;
            }
        }

        if (isprime) {
            cout << strt << ", ";
            ++count;
        }
        ++strt;
    }
    return 0;
}

int main()
{
    int strt, end, result;

    Again:
    cout<<"Start: ";
    cin>>strt;

    cout<<"End: ";
    cin>>end;

    cout<<"\n";
    if (strt>end)
    {
        cout<<"Range is Invalid, Try Again."<<"\n";
        goto Again;
    }
    cout<<"Prime numbers in the given range are: ";
    prime(strt,end);
    return 0;
}