#include<iostream>
using namespace std;
void truetofalse(string);
main()
{
  string x;
  cout<<"Enter 'true' or 'false': ";
  cin>>x;
  truetofalse(x);
}

void truetofalse(string x)
{
  if(x=="true")
  cout<<"false";
  if(x=="false")
  cout<<"true";
}
