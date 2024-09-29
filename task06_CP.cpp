#include<iostream>
using namespace std;
void longestTime(float,float);
main()
{
  float hours,minutes;
  cout<<"Enter the number of hours:";
  cin>>hours;
  cout<<"Enter the number of minutes:";
  cin>>minutes;
  longestTime(hours, minutes);  
}

void longestTime(float hour, float minute)
{
  hour=hour*60;
  if(hour>minute)
   {
     cout<<hour/60;
   }
  else if(minute>hour)
   {
    cout<<minute;
   }
  else
   {
     cout<<"Both are equal."; 
   }
}