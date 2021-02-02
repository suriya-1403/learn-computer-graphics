#include<conio.h>
#include<graphics.h>
#include<stdio.h>
void main(){
	int gd=DETECT,gm;
	clrscr();
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	rectangle(100,100,450,150);
	rectangle(100,150,450,200);
	rectangle(100,200,450,250);
	circle(275,175,25);
	getch();
	closegraph();
}