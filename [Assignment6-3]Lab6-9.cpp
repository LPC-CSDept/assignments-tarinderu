#include <iostream>

using namespace std;

void getinput(int &,int &,int &);
void maxmin(int,int,int,int &,int &);

int main() {
    int num1,num2,num3;
    int max,min;

    getinput(num1,num2,num3);
    maxmin(num1,num2,num3,max,min);
    cout<<"The gap between "<<max<<" and "<<min<<" : "<<max-min<<endl;
}
    void getinput(int &num1,int &num2,int &num3)
{
    cin>>num1>>num2>>num3;
}
    void maxmin(int n1,int n2,int n3,int &max,int &min)
{
    if(n1 >= n2 && n1 >= n3)
    max=n1;
    if(n2 >= n1 && n2 >= n3)
    max=n2;
    if(n3 >= n1 && n3 >= n2)
    max=n3;
    if(n1 <= n2 && n1 <= n3)
    min=n1;
    if(n2 <= n1 && n2 <= n3)
    min=n2;
    if(n3 <= n1 && n3 <= n2)
    min=n3;
}