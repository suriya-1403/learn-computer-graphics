#include<conio.h>
#include<graphics.h>
#include<stdio.h>
void main(){
	int gd=DETECT,gm;
	int a=150, b=300, c=450;
	clrscr();
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	line(a,a,c,a);
	line(a,a,b,b);
	line(c,a,b,b);
	getch();
	closegraph();
}