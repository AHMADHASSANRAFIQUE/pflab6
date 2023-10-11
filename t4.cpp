#include<iostream>
using namespace std;
float greatest_num(float num1,float num2,float num3);
main()
{
    float num1,num2,num3,num4;
    cout<<"Enter the first number: ";
    cin>>num1;
    cout<<"Enter the second number: ";
    cin>>num2;
    cout<<"Enter the third number: ";
    cin>>num3;
    num4 = greatest_num(num1,num2,num3);
    cout<<"The greatest number among "<<num1<<", "<<num2<<", and "<<num3<<" is: "<<num4;
    
}
float greatest_num(float num1,float num2,float num3)
{
    if(num1>=num2)
    {
        if(num1>=num3){
        return num1;
        }
    }
    if(num2>=num1)
    {
        if(num2>=num3)
        return num2;
    }
    if(num3>num1)
    {
        if(num3>=num1)
        return num3;
    }
}