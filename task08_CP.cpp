#include<iostream>
using namespace std;
void pet(int holidays);
main()
{
   int holidays;
   cout<<"Holidays: ";
   cin>>holidays;
   pet(holidays);
}
void pet(int holiday)
{
   int workingdays=365-holiday;
   int games=(workingdays*63+holiday*127);
   int norm=30000-games;
   int minutesslp=norm%60;
   int hoursslp=norm/60;
   int minutesply=-norm%60;
   int hoursply=-norm/60;
   if(norm>=0)
   {
     cout<<"Tom sleeps well."<<endl;
     cout<<hoursslp<<" hours and "<<minutesslp<<" minutes less for play.";
   }
   else
   {
     cout<<"Tom will run away."<<endl;
     cout<<hoursply<<" hours and "<<minutesply<<" minutes for play.";
   }
} 