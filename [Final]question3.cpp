#include <bits/stdc++.h>
using namespace std;

unordered_map <int, int> m1;
unordered_map <int, int> m2;

int isSubset(int n2, int array2[])
{
    for(int i = 0; i < n2; i ++)
    {
        if(!m1[array2[i]])
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int arr1[10], arr2[10], n1, n2;

    m1.reserve(10);
    m2.reserve(10);
    cout << "\n Enter the number of elements in array 1: ";
    cin >> n1;

    cout << "\n Enter the elements in array 1: ";
    for(int i=0;i<n1;i++)
    {
        cin>>arr1[i];
        m1[arr1[i]]++;
    }
    cout << "\n Enter the number of elements in array 2;";
    cin >> n2;

    cout << "\n Enter the elements of array 2: ";
    for (int i=0; i<2;i++)
    {
        cin>>arr2[i];
        m2[arr2[i]]++;
    }
    if(isSubset(n2, arr2))
    {
        cout << "\n Array 2 is a subset of Array 1\n";
    }
    else
    {
        cout << "\n Array 2 is not a subset of Array 1\n";
    }
    return 0;
}
