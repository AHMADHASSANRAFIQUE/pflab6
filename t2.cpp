#include<iostream>
using namespace std;
bool parity_analysis(int num);
main()
{
    float num;
    cout<<"Enter a 3-digit number: ";
    cin>>num;
    cout<<parity_analysis(num);
}
bool parity_analysis(int num)
{
    int sum;
    int number = num;
    int md1 = num%10;
    int num1 = num/10;
    int md2 = num1%10;
    int num2 = num1/10;
    int md3 = num2%10;
    int num3 = num2/10;
    sum = md1+md2+md3;
    if(num%2 == 0 && sum%2 == 0)
    {
        return 1;
    }
    if(num%2 != 0 && sum%2 != 0)
    {
        return 0;
    }
  
}