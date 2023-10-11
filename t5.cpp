#include<iostream>
using namespace std;
float payable(float amount,string month,string day);
main()
{
    float amount,tax;
    string day,month;
    cout<<"Enter Purchase Day: ";
    cin>>day;
    cout<<"Enter Purchase Month: ";
    cin>>month;
    cout<<"Enter Purchase Amount: ";
    cin>>amount;
    tax = payable(amount,month,day);
    cout<<"Payable Amount after discount: "<<tax;
}
float payable(float amount,string month,string day)
{
    float discount = amount;
    if(day == "Sunday" && month == "October")
    {
        discount = amount-(amount*0.1);
    
    }
        if(day == "Sunday" && month != "October")
    {
        discount = amount-(amount*0.05);

    }
    return discount;
   
}