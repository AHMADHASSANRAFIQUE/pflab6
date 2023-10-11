#include<iostream>
using namespace std;
string test(float speed);
main()
{
    float speed;
    cout<<"Enter the speed: ";
    cin>>speed;
    cout<<test(speed);
}
string test(float speed)
{
    if(speed>0 && speed<=10)
    {
        return "slow";
    }
       if(speed>10 && speed<=50)
    {
        return "average";
    }
       if(speed>50 && speed<=150)
    {
        return "fast";
    }
       if(speed>150 && speed<=1000)
    {
        return "ultra-fast";
    }
       if(speed>1000)
    {
        return "extremely fast";
    }
   
}