#include<iostream>
using namespace std;
float lowestprice(int kilometer,string day);
main()
{
    string day;
    int kilometer;
    cout<<"Enter the number of kilometers: ";
    cin>>kilometer;
    cout<<"Enter the period of the day (day/night): ";
    cin>>day;
    float num4 = lowestprice(kilometer,day);
    cout<<"Lowest price for "<<kilometer<<" kilometers: "<<num4<<" EUR";
}
float lowestprice(int kilometer,string day)
{
    float after;
    if(day=="day"&&(kilometer>0 && kilometer<=20))
    {
        after = kilometer*0.79+0.7;
        return after;
    }
    if(day=="night"&&(kilometer>0 && kilometer<=20))
    {
        after = kilometer*0.9+0.7;
        return after;
    }
  
    if((kilometer>=20 && kilometer<100) && (day=="day"||day=="night"))
    {
        after = kilometer*0.09;
        return after;
    }
      if(kilometer>=100 && (day=="day"||day=="night"))
    {
        after = kilometer*0.06;
        return after;
    }
    
}
