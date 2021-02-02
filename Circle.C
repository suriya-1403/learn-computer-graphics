#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main(){
	int gd=DETECT,gm;
	int x1=250,y1=200,r=50;
	clrscr();
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	circle(x1,y1,r);
	getch();
	closegraph();
}