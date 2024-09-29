#include<iostream>
using namespace std;
void numequal(int, int);
main()
{
  int num1,num2;
  cout<<"Enter the first number:";
  cin>>num1;
  cout<<"Enter the second number:";
  cin>>num2;
  numequal(num1, num2);
}

void numequal(int num1, int num2)
{
  if(num1==num2)
  cout<<"True";
  if(num1!=num2)
  cout<<"False";
}