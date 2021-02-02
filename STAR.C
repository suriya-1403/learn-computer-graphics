#include<graphics.h>
#include<conio.h>
#include<stdio.h>
void main(){
	int gd=DETECT, gm;
	clrscr();
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	setfillstyle(SOLID_FILL,BLUE);
	circle(150,150,100);
	floodfill(150,150,WHITE);
	setfillstyle(SOLID_FILL,GREEN);
	line(85,225,150,50);
	line(150,50,220,220);
	line(220,220,58,115);
	line(58,115,243,115);
	line(243,115,85,225);
	floodfill(244,100,WHITE);
	getch();
	closegraph();
}


