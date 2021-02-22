#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
void main(){
	int gd=DETECT,gm;
	int x1=150,r=50,i;
	int y1=250;
	clrscr();

	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	setcolor(BLACK);
	for(i=0;i<100;i++)
	{
		circle(x1,y1-i,r);
		line(x1,300-i,x1,400-i);

		line(x1,330-i,80,360-i);
		line(x1,330-i,220,360-i);

		line(x1,400-i,80,430-i);
		line(x1,400-i,220,430-i);
		delay(50);
		clrscr();
	}
	circle(x1,150,r);
	line(x1,200,x1,300);

	line(80,260,220,260);

	line(80,300,220,300);
	delay(300);
	clrscr();
	for(i=0;i<100;i++)
	{
		circle(x1,150+i,r);
		line(x1,200+i,x1,300+i);

		line(x1,260+i,80,230+i);
		line(x1,260+i,220,230+i);

		line(x1,300+i,80,270+i);
		line(x1,300+i,220,270+i);
		delay(50);
		clrscr();
	}
	getch();
	closegraph();
}
