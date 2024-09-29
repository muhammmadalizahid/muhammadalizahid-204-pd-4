#include<iostream>
using namespace std;
void airlinedisc(string,float);
main()
{
 string country;
 float price;
 cout<<"Enter the country's name: ";
 cin>>country;
 cout<<"Enter the ticket price in dollars: $";
 cin>>price;
 airlinedisc(country,price);
}

void airlinedisc(string country, float price)
{
 int discount;
 if(country=="Pakistan")
  {
   discount=price*0.95;
   cout<<"Final ticket price after discount: $"<<discount;
  }
 if(country=="Ireland")
  {
   discount=price*0.90;
   cout<<"Final ticket price after discount: $"<<discount;
  }
 if(country=="India")
  {
   discount=price*0.80; 
   cout<<"Final ticket price after discount: $"<<discount;
  }
 if(country=="England")
  {
   discount=price*0.70;
   cout<<"Final ticket price after discount: $"<<discount;
  }
 if(country=="Canada")
  {
   discount==price*0.65;
   cout<<"Final ticket price after discount: $"<<discount;
  }
}