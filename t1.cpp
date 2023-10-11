#include<iostream>
using namespace std;
bool greater_num(float num1,float num2);
main()
{
    float num1,num2;
    cout<<"Enter the first number: ";
    cin>>num1;
    cout<<"Enter the second number: ";
    cin>>num2;
    cout<<greater_num(num1,num2);
}
bool greater_num(float num1,float num2)
{
    if(num1>num2)
    {
        return 1;
    }
    if(num2>num1)
    {
        return 0;
    }
}