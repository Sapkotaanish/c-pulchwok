#include <stdio.h>
#include <conio.h>
#include <process.h>
#include <graphics.h>
#include <windows.h>



void gotoxy(int x,int y)
{
    COORD coord;
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);

}
void border();
void loader();
void board();
int checkwin();

int main()
{
    board();
}

void border()
{
    int j;
    //Top border line...
 gotoxy(0,0);
 for(j=0; j<100; j++)
  printf("%c", 223);

 //Bottom border line...
 gotoxy(0,40);
 for(j=0; j<=100; j++)
  printf("%c", 223);

 //Left and Right border line...
 for(j=0; j<40; j++)
 {
  gotoxy(0,j);
  printf("%c",219);

  gotoxy(100,j);
  printf("%c",219);
 }
}



//To make a loading screen.
void loader()
{
    border();
    int r,q;
    gotoxy(32,32);
    printf("Loading...");
    gotoxy(5,34);
    for(r=1;r<20;r++)
    {
        for(q=0;q<5;q++)
            printf("%c",175);
    }

}



void board()
{
    loader();



}
