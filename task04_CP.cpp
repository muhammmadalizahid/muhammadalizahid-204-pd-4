#include<iostream>
using namespace std;
void checkSpeed(int speed);
main()
{
  int speed;
  cout<<"Speed:";
  cin>>speed;
  checkSpeed(speed);
}
void checkSpeed(int speed)
{
  if(speed>100)
   {
      cout<<"Halt... You will be challeneged!!!";
   }
  if(speed<=100)
   {
      cout<<"Perfect! You're doing good.";
   }
}
