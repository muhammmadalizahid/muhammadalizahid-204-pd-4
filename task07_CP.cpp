#include<iostream>
using namespace std;
void flowerShop(int roseRed, int whiteRose, int tulip);
main()
{

   int redr,whiter,tulip;
   cout<<"Red Roses: ";
   cin>>redr;
   cout<<"White Roses: ";
   cin>>whiter;
   cout<<"Tulips: ";
   cin>>tulip; 
   flowerShop(redr, whiter, tulip);  

}

void flowerShop(int redr, int whiter, int tulip)
{
 
   float redrprice=2.00, whiterprice=4.10, tulipprice=2.50;
   redr=redr*redrprice;
   whiter=whiter*whiterprice;
   tulip=tulip*tulipprice;
   
   float totalprice=redr+whiter+tulip;
   if(totalprice>200)
     { 
       cout<<"Original Price: $"<<totalprice<<endl;
       totalprice=totalprice-(totalprice*0.20);
       cout<<"Price after Discount: $"<<totalprice;       
     }
   else
     {
        cout<<"Original Price: $"<<totalprice<<endl;
        cout<<"No discount applied.";
     }
}