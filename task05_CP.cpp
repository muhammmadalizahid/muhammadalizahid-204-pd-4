#include<iostream>
using namespace std;
void possibleBonus(int, int);
main()
{
  int user,opp;
  cout<<"Enter the position of your friend :";
  cin>>opp;
  cout<<"Enter your position:";
  cin>>user;
  possibleBonus(user,opp); 
}
void possibleBonus(int user, int opp)
{  
  user=user+6;
  if(opp<=user)
   {
      cout<<"true";
   }
  else
   {
      cout<<"false";
   }
}