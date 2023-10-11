#include<iostream>
using namespace std;
bool equal(int num1,int num2,int num3);
main()
{
    int num1,num2,num3,num4;
    cout<<"Enter the first number: ";
    cin>>num1;
    cout<<"Enter the second number: ";
    cin>>num2;
    cout<<"Enter the third number: ";
    cin>>num3;
    num4 = equal(num1,num2,num3);
    cout<<num4;
}
bool equal(int num1,int num2,int num3)
{
    if(num1==num2 && num1==num3)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}