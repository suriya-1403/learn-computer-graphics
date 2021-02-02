#include<graphics.h>
#include<conio.h>
#include<stdio.h>
void main(){
	int gd=DETECT,gm;
	int x1=100, x2=200, y1=100, y2=200;
	clrscr();
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	line(x1,y1,x2,y2);
	getch();
	closegraph();
}