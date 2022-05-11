#include <bits/stdc++.h>
using namespace std;
 

void findMax(int arr[], int n)
{
 
    
    int maxFirst = INT_MIN;
 
    
    int mid = n / 2;
 
    
    for (int i = 0; i < mid; i++)
        maxFirst = max(maxFirst, arr[i]);
 
   
    if (n % 2 == 1)
        maxFirst = max(maxFirst, arr[mid]);
 
    
    int maxSecond = INT_MIN;
 
    
    for (int i = mid; i < n; i++)
        maxSecond = max(maxSecond, arr[i]);
 
    
    cout << maxFirst << ", " << maxSecond;
}
 

int main()
{
    int arr[] = { 1, 12, 14, 5 };
    int n = sizeof(arr) / sizeof(arr[0]);
 
    findMax(arr, n);
 
    return 0;
}