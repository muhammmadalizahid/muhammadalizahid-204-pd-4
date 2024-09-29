#include<iostream>
#include<windows.h>
using namespace std;

void gotoxy(int, int);
void printMaze();
void movePlayer(int, int);

main()
{
int x=4, y=4;
system("cls");
printMaze();
movePlayer(x,y);

}

void movePlayer(int x, int y;)
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
 COORD cordinates;
 cordinates.X = x;
 cordinates.Y = y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), cordinates);
}