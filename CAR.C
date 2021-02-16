#include<graphics.h>
#include<conio.h>
#include<stdio.h>
void main(){
	int gd=DETECT, gm;
	int arr[50]={100,40, 200,40, 220,80, 260,80, 260,130, 40,130, 40,80, 80,80, 100,40};
	int i,j;
	initgraph(&gd,&gm,"C:\\Turboc3\\BGI");
	for(i=0;i<200;i++){
		for(j=0;j<18;j=j+2){
			++arr[j];
		}
		setcolor(BLUE);
		drawpoly(9,arr);
		rectangle(105+i,45, 145+i,75);
		rectangle(155+i,45, 195+i,75);
		circle(100+i,130,20);
		circle(200+i,130,20);
		setcolor(RED);
		ellipse(240+i,30,0,360,10,20);
		setcolor(WHITE);
		line(240+i,50, 240+i,80);

		clrscr();
	}
	getch();
	closegraph();
}