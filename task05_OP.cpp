#include<iostream>
#include<windows.h>
using namespace std;
void printName(int x, int y);
void gotoxy(int x, int y);

main()
{
 int x=40, y=17;
 system("cls");
 printName(x,y);
}

void printName(int x, int y)
{
  gotoxy(x,y++);
  cout<<"####   ####      ####### ##      #########    ######## ####### ##   ## ######## #####"<<endl;
  gotoxy(x,y++);
  cout<<"##  ###  ##      ##   ## ##          ##             #  ##   ## ##   ##    ##    ##  ##"<<endl;
  gotoxy(x,y++);
  cout<<"##   #   ## ##   ####### ##          ##           #    ####### #######    ##    ##   ##"<<endl;
  gotoxy(x,y++);
  cout<<"##       ##      ##   ## ##          ##         #      ##   ## ##   ##    ##    ##  ##"<<endl;
  gotoxy(x,y++);
  cout<<"##       ##      ##   ## ####### #########    ######## ##   ## ##   ## ######## #####";
}
void gotoxy(int x, int y)
{
  COORD coordinates;
  coordinates.X=x;
  coordinates.Y=y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}