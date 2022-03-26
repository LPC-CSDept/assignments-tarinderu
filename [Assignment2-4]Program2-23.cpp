#include <iostream>
using namespace std;

int main()
{
    int sp, dis, dp;
    sp = 59.95;
    dis = 20;

    dp = sp - (sp * dis/100);
    cout << dp;
    return 0;
}