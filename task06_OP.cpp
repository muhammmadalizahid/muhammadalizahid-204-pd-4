#include<iostream>
#include<windows.h>
using namespace std;
void printH(int x, int y);
void printA(int x, int y);
void printS(int x, int y);
void printN(int x, int y);
void gotoxy(int x, int y);

main()
{
   int x=85, y=4;
   system("cls");
   printH(x,y);
   y+=6;
   printA(x,y);
   y+=6;
   printS(x,y);
   y+=6;
   printS(x,y);
   y+=6;
   printA(x,y);
   y+=6;
   printN(x,y);
}

void printH(int x, int y)
{ 
   gotoxy(x,y++);
   cout<<" ##    ##";
   gotoxy(x,y++);
   cout<<" ##    ##";
   gotoxy(x,y++);
   cout<<" ########";
   gotoxy(x,y++);
   cout<<" ##    ##";
   gotoxy(x,y++);
   cout<<" ##    ##";
}
void printA(int x, int y)
{
   gotoxy(x,y++);
   cout<<" ########";
   gotoxy(x,y++);
   cout<<" ##    ##";
   gotoxy(x,y++); 
   cout<<" ########";
   gotoxy(x,y++); 
   cout<<" ##    ##";
   gotoxy(x,y++);
   cout<<" ##    ##"; 
}
void printS(int x, int y)
{
   gotoxy(x,y++);
   cout<<" ########";
   gotoxy(x,y++);
   cout<<" ##       ";
   gotoxy(x,y++);
   cout<<" ########";
   gotoxy(x,y++);
   cout<<"       ##";
   gotoxy(x,y++);
   cout<<" ########"; 
}
void printN(int x, int y)
{
   gotoxy(x,y++);
   cout<<"###     ##";
   gotoxy(x,y++);
   cout<<"## ##   ##";
   gotoxy(x,y++);
   cout<<"##  ##  ##";
   gotoxy(x,y++);
   cout<<"##   ## ##";
   gotoxy(x,y++);
   cout<<"##     ###";
}


void gotoxy(int x, int y)
{
  COORD coordinates;
  coordinates.X=x;
  coordinates.Y=y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}