#include <iostream>
using namespace std;
float endprice(string category, int people, float budget);
main()
{
    float budget;
    int people;
    string category;
    cout << "Enter the budget: ";
    cin >> budget;
    cout << "Enter the category (VIP/Normal): ";
    cin >> category;
    cout << "Enter the number of people in the group: ";
    cin >> people;
    endprice(category,people,budget);
}
float endprice(string category, int people, float budget)
{
    if (people <= 4 && category == "VIP")
    {
        float total = (budget * 0.75) + (499.9*people);
        if(total>budget)
		{
			float ftotal = total - budget;
			cout<<"Not enough money! You need "<<ftotal<<" leva.";
		}
        else
		{
			float ftotal = budget - total;
			cout<<"Yes! You have "<<ftotal<<"  leva left.";
		}
    }
    
    if (people <= 4 && category == "Normal")
    {
        float total = (budget * 0.75) + (249.99*people);
        if(total>budget)
		{
			float ftotal = total - budget;
			cout<<"Not enough money! You need "<<ftotal<<" leva.";
		}
        else
		{
			float ftotal = budget - total;
			cout<<"Yes! You have "<<ftotal<<"  leva left.";
		}
    }
    
    if ((people >= 5 && people <= 9) && category == "VIP")
    {
        float total = (budget * 0.60) + (people*499.9);
        if(total>budget)
		{
			float ftotal = total - budget;
			cout<<"Not enough money! You need "<<ftotal<<" leva.";
		}
        else
		{
			float ftotal = budget - total;
			cout<<"Yes! You have "<<ftotal<<"  leva left.";
		}
    }
    
    if ((people >= 5 && people <= 9) && category == "Normal")
    {
        float total = (budget * 0.60) + (people*249.99);
        if(total>budget)
		{
			float ftotal = total - budget;
			cout<<"Not enough money! You need "<<ftotal<<" leva.";
		}
        else
		{
			float ftotal = budget - total;
			cout<<"Yes! You have "<<ftotal<<"  leva left.";
		}
    }
    
    if ((people >= 10 && people <= 24) && category == "VIP")
    {
        float total = (budget * 0.50) + (people*499.9);
        if(total>budget)
		{
			float ftotal = total - budget;
			cout<<"Not enough money! You need "<<ftotal<<" leva.";
		}
        else
		{
			float ftotal = budget - total;
			cout<<"Yes! You have "<<ftotal<<"  leva left.";
		}
    }
    
    if ((people >= 10 && people <= 24) && category == "Normal")
    {
        float total =  (budget * 0.50) + (people*249.99);
         if(total>budget)
		{
			float ftotal = total - budget;
			cout<<"Not enough money! You need "<<ftotal<<" leva.";
		}
        else
		{
			float ftotal = budget - total;
			cout<<"Yes! You have "<<ftotal<<"  leva left.";
		}
    }
    
    if ((people >= 25 && people <= 49) && category == "VIP")
    {
        float total = (budget * 0.40) + (people*499.9);
            if(total>budget)
		{
			float ftotal = total - budget;
			cout<<"Not enough money! You need "<<ftotal<<" leva.";
		}
        else
		{
			float ftotal = budget - total;
			cout<<"Yes! You have "<<ftotal<<"  leva left.";
		}
    }
    
    if ((people >= 25 && people <= 49) && category == "Normal")
    {
        float total =  (budget * 0.40) + (people*249.99);
            if(total>budget)
		{
			float ftotal = total - budget;
			cout<<"Not enough money! You need "<<ftotal<<" leva.";
		}
        else
		{
			float ftotal = budget - total;
			cout<<"Yes! You have "<<ftotal<<"  leva left.";
		}
    }
    
    if ((people >= 50) && category == "VIP")
    {
        float total = (budget * 0.25) + (people*499.9);
        if(total>budget)
		{
			float ftotal = total - budget;
			cout<<"Not enough money! You need "<<ftotal<<" leva.";
		}
        else
		{
			float ftotal = budget - total;
		cout<<"Yes! You have "<<ftotal<<"  leva left.";
		}
    }
    
    if ((people >= 25 && people <= 49) && category == "Normal")
    {
        float total = (budget * 0.25)+ (people*249.99);
        if(total>budget)
		{
			float ftotal = total - budget;
			cout<<"Not enough money! You need "<<ftotal<<" leva.";
		}
        else
		{
			float ftotal = budget - total;
			cout<<"Yes! You have "<<ftotal<<"  leva left.";
		}
    }
}
