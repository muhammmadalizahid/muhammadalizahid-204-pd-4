#include<iostream>
#include<windows.h>
using namespace std;

void gotoxy(int, int);
void printMaze();
void movePlayer(int, int);

main()
{
 int x=3, y=4;
 system("cls");
 printMaze();
 while(true)
  {
    movePlayer(x,y);
    x=x+1;
    if(x==21)
      {
        x=4;
      }
  }
}

void movePlayer(int x, int y)
{
  gotoxy(x,y);
  cout<< "P";
  Sleep(100);
  gotoxy(x,y);
  cout<< " ";
}

void printMaze()
{
 cout<< "######################" <<endl;
 cout<< "#                    #" <<endl;
 cout<< "#                    #" <<endl;
 cout<< "#                    #" <<endl;
 cout<< "#                    #" <<endl;
 cout<< "#                    #" <<endl;
 cout<< "#                    #" <<endl;
 cout<< "#                    #" <<endl;
 cout<< "######################" <<endl;          
}
void gotoxy(int x, int y)
{
 COORD coordinates;
 coordinates.X = x;
 coordinates.Y = y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}