#include<stdio.h>
#include<graphics.h>
#include<dos.h>
#include<conio.h>
void main(){
	int gd=DETECT,gm;
	int x1=150,y1=150;
	clrscr();
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	setcolor(BLACK);
	for(int i=0;i<400;i++)
	{
		circle(x1+i,y1,20);
		circle(x1+i,y1,40);
		circle(x1+i,y1,60);
		delay(75);
		clrscr();
	}
	getch();
	closegraph();
}