#include<iostream>
using namespace std;
string title(float age,char gender);
main()
{
    string result;
    float age;
    cout<<"Enter your age: ";
    cin>>age;
    char gender;
    cout<<"Enter your gender (m/f): ";
    cin>>gender;
    result = title(age,gender);
    cout<<"Your personal title is: "<<result;
}
string title(float age,char gender)
{
    if(age>=16 && gender=='m')
    {
        return "Mr.";
    }
       if(age<16 && gender== 'm')
    { 
        return "Master";
    }
       if(age>=16 && gender== 'f')
    {
        return "Ms.";
    }
       if(age<16 && gender== 'f')
    {
        return "Miss";
    }
   
}
