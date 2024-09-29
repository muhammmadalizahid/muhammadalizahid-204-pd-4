#include<iostream>
using namespace std;
void tissueissue(int,int);
main()
{
   int tissue,people;
   cout<<"Number of people in the household: "; 
   cin>>people;
   cout<<"Numver of rolls of TP: ";
   cin>>tissue;
   tissueissue(tissue, people);
}
void tissueissue(int tissue, int people)
{
   int peopletissue=people*57;
   int tissuesheets=tissue*500;
   int condition=tissuesheets/peopletissue;
   if(condition>=14)
    {
      cout<<"Your TP will last "<<condition<<" days, no need to panic!";
    }
   else
    {
      cout<<"Your tissues will only last "<<condition<<" days, buy more!";
    }
} 

