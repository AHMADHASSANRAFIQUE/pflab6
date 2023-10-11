#include<iostream>
using namespace std;
float totalincome(string type,int rows,int columns);
main()
{
    string type;
    int rows,columns;
    cout<<"Enter the screening type (Premiere/Normal/Discount): ";
    cin>>type;
    cout<<"Enter the number of rows: ";
    cin>>rows;
    cout<<"Enter the number of columns: ";
    cin>>columns;
    float num4 = totalincome(type,rows,columns);
    cout<<num4;
    
}
float totalincome(string type,int rows,int columns)
{
    float after;
    if(type=="Premiere")
    {
        after = rows*columns*12;
        return after;
    }
    if(type =="Normal")
    {
        after = rows*columns*7.5;
        return after;
    }
    if(type=="Discount")
    {
        after = rows*columns*5;
        return after;
    }
    
}