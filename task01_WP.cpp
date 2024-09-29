#include<iostream>
#include<windows.h>
using namespace std;

void gotoxy(int x, int y)
{
 COORD cordinates;
 cordinates.X = x;
 cordinates.Y = y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), cordinates);
}
int main()
{
system("cls");
cout<<"Test";
gotoxy(13,16);
cout<<"My name is Muhammad Irzam";

return 0;
}