#include<graphics.h>
#include<stdio.h>
#include<conio.h>
void main(){
	int gd=DETECT, gm;
	int arr[50]={200,290, 300,290, 370,210, 370,110, 300,40, 200,40, 130,110, 130,210, 200,290};
	int arr2[50]={200,290, 370,210, 300,40, 130,110, 200,290};
	int arr3[50]={300,290, 370,110, 200,40, 130,210, 300,290};
	int arr4[50]={250,62, 350,160, 250,267, 152,160, 250,62};
	int arr5[50]={180,90, 320,90, 322,232, 178,232, 180,90};
	initgraph(&gd,&gm,"C:\\Turboc3\\bgi");
	setcolor(RED);
	drawpoly(9,arr);
	setcolor(GREEN);
	drawpoly(5,arr2);
	drawpoly(5,arr3);
	setcolor(YELLOW);
	drawpoly(5,arr4);
	drawpoly(5,arr5);
	setcolor(BLUE);
	rectangle(240,290, 260,400);
	rectangle(247,290, 253,400);
	getch();
	closegraph();

}