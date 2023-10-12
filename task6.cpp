#include<iostream>
#include<windows.h>
#include<conio.h>
using namespace std;
          char getCharAtxy(short int x,short int y);
          void printMaze();
          void enemy1();
          void eraseEnemy1();  
          void enemy2();
          void eraseEnemy2(); 
          void moveEnemy1();
          void Player();
          void movePlayerleft();
          void movePlayerright();
          void moveEnemy2();
          void moveEnemy3();
          void eraseEnemy3();
          void enemy3 ();
          void gotoxy(int x, int y);
	int eX=2;
	int eY=1;
	int x = 40;	
	int y = 2;
	int pX=2;
	int pY=29;
	int a = 2;
	int b = 2;
main()
{system("cls");
 printMaze();
 enemy1();
 enemy2();
 enemy3();
 
Player();
while (true)
{ if (GetAsyncKeyState(VK_LEFT))
{
movePlayerleft();
}
if (GetAsyncKeyState(VK_RIGHT))
{ 
movePlayerright();
}
moveEnemy1();
moveEnemy2();
moveEnemy3();

Sleep(200);
}
getch ();
}
void gotoxy(int x,int y)
{
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
void printMaze ()
{
cout<<"#####################################################################################################" <<endl;
cout<<"#                                                                                                   #" <<endl;
cout<<"#                                                                                                   #" <<endl;
cout<<"#                                                                                                   #" <<endl;
cout<<"#                                                                                                   #" <<endl;
cout<<"#                                                                                                   #" <<endl;
cout<<"#                                                                                                   #" <<endl;
cout<<"#                                                                                                   #" <<endl;
cout<<"#                                                                    		                    #" <<endl;
cout<<"#                                                                                                   #" <<endl;
cout<<"#                                                                                                   #" <<endl;
cout<<"#                                                                                                   #" <<endl;
cout<<"#                                                                                                   #" <<endl;
cout<<"#                                                                                                   #" <<endl;
cout<<"#                                                                                                   #" <<endl;
cout<<"#                                                                                                   #" <<endl;
cout<<"#                                                                                                   #" <<endl;
cout<<"#                                                                                                   #" <<endl;
cout<<"#                                                                                                   #" <<endl;
cout<<"#                                                                                                   #" <<endl;
cout<<"#                                                                                                   #" <<endl;
cout<<"#                                                                                                   #" <<endl;
cout<<"#                                                                                                   #" <<endl;
cout<<"#                                                                                                   #" <<endl;
cout<<"#                                                                                                   #" <<endl;
cout<<"#                                                                                                   #" <<endl;
cout<<"#                                                                                                   #" <<endl;
cout<<"#                                                                                                   #" <<endl;
cout<<"#                                                                                                   #" <<endl;
cout<<"#                                                                                                   #" <<endl;
cout<<"#                                                                                                   #" <<endl;
cout<<"#                                                                                                   #" <<endl;
cout<<"#                                                                                                   #" <<endl;
cout<<"#                                                                                                   #" <<endl;
cout<<"#####################################################################################################" <<endl;
}
void enemy1()
{
gotoxy(eX,eY);
cout<<  " (~~~)...(~~~) ";
gotoxy(eX,eY+1);
cout<<  " |..| ||| |..| ";
gotoxy(eX,eY+2);
cout<<  " |..| ||| |..| ";
gotoxy(eX,eY+3);
cout<<  " |..| ||| |..| ";
gotoxy(eX,eY+4);
cout<<  " (~~~)...(~~~) ";
}
void eraseEnemy1()
{
gotoxy(eX,eY);
cout<<  "               ";
gotoxy(eX,eY+1);
cout<<  "               ";
gotoxy(eX,eY+2);
cout<<  "               ";
gotoxy(eX,eY+3);
cout<<  "               ";
gotoxy(eX,eY+4);
cout<<  "               ";                        
}
void moveEnemy1()
{
eraseEnemy1();
eX=eX+1;
if (eX==50)
{
eX=2;
}
enemy1();
}
void enemy2()
{
gotoxy(x,y);
cout<<"(~~~)...(~~~)";
gotoxy(x,y+1);
cout<<"|..| ||| |..|";
gotoxy(x,y+2);
cout<<"|..| ||| |..|";
gotoxy( x,y+3);
cout<<"|..| ||| |..|";
gotoxy(x,y+4);
cout<<"(~~~)...(~~~)";
}
void eraseEnemy2()
{
gotoxy(x,y);
cout<<"              ";
gotoxy(x,y+1);
cout<<"              ";
gotoxy(x,y+2);
cout<<"              ";
gotoxy(x,y+3);
cout<<"              ";
gotoxy(x,y+4);
cout<<"              ";
}
void Player ()
{
gotoxy(pX,pY);
cout<<"    /\\        "<<endl;
gotoxy(pX,pY+1);
cout<<" __/~~\\__      "<<endl;
gotoxy(pX,pY+2);
cout<<"/  |  |  \\     "<<endl;
gotoxy(pX,pY+3);
cout<<" ===. .===      "<<endl;
gotoxy(pX,pY+4);
cout<<"  ||||||        "<<endl;
}
void erasePlayer ()
{ gotoxy(pX,pY);
cout<<"                "<<endl;
gotoxy(pX,pY+1);
cout<<"                "<<endl;
gotoxy(pX,pY+2);
cout<<"                "<<endl;
gotoxy(pX,pY+3);
cout<<"                "<<endl;
gotoxy(pX,pY+1);
cout<<"                "<<endl;
}
void movePlayerleft()
{  if(getCharAtxy(pX-1,pY) ==' '){
   erasePlayer();
   pX=pX-1;
   Player();
}
}
void movePlayerright()
{ if (getCharAtxy(87,pY)==' '){

erasePlayer();
pX=pX+1;
 Player();
}
}
char getCharAtxy(short int x,short int y)
{
CHAR_INFO ci;
COORD xy = {0,0};
SMALL_RECT rect = {x,y,x,y};
COORD coorBufSize;
coorBufSize.X = 1;
coorBufSize.Y = 1;
return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coorBufSize,xy,&rect) ? ci.Char.AsciiChar
: ' ';
}
void moveEnemy2()
{
eraseEnemy2();
y=y+1;
if(y==25)
{
  y=2;
 }
enemy2();
}
void enemy3 ()
{
gotoxy(a,b);
cout<<"(~~~)...(~~~)";
gotoxy(a,b+1);
cout<<"|..| ||| |..|";
gotoxy(a,b+2);
cout<<"|..| ||| |..|";
gotoxy(a,b+3);
cout<<"|..| ||| |..|";
gotoxy(a,b+4);
cout<<"(~~~)...(~~~)";
}
void eraseEnemy3()
{
gotoxy(a,b);
cout<<  "             ";
gotoxy(a,b+1);
cout<<  "             ";
gotoxy(a,b+2);
cout<<  "             ";
gotoxy(a,b+3);
cout<<  "             ";
gotoxy(a,b+4);
cout<<"               ";                        
}
void moveEnemy3()
{
eraseEnemy3();
a=a+3;
b=b+1;
if(a>50||b>29)
{
 a=2;
 b=2;
}
enemy3();
}

   
  


             