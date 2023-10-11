#include<iostream>
using namespace std;
float perimeter(float num1,char shape);
main()
{
    char shape;
    cout<<"Enter the shape (s for square, c for circle, t for triangle, h for hexagon): ";
    cin>>shape;
    float num1;
    cout<<"Enter the value: ";
    cin>>num1;
    float peri = perimeter(num1,shape);
    cout<<"The perimeter is: "<<peri;
}
float perimeter(float num1,char shape)
{
    if(shape == 's')
    {
        float sq = 4*num1; 
        return sq;
    }
       if(shape == 'c')
    {
        float cir = 6.28*num1; 
        return cir;
    }
       if(shape == 't')
    {
        float tri = 3*num1; 
        return tri;
    }
       if(shape == 'h')
    {
        float hex = 6*num1; 
        return hex;
    }
   
}
