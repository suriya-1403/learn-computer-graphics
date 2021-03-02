#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
void main(){  
	
	int gd = DETECT ,gm, i;  
	float x, y,dx,dy,steps,steps1,x3,y3,dx1,dy1;  
	int x0, x1, y0, y1,x2,y2;  
	initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
	x0 = 100 , y0 = 200, x1 = 400, y1 = 200,x2=600,y2=400;
	dx = (float)(x1 - x0);
	dy = (float)(y1 - y0);
	dx1=(float)(x2-x1);
	dy1=(float)(y2-y1);
	if(dx>=dy)
			{
		steps = dx;
	}
	else
			{
		steps = dy;
	}
	dx = dx/steps;
	dy = dy/steps;
	x = x0;
	y = y0;
	i = 1;
	while(i<= steps)
	{
		putpixel(x, y, WHITE);
		x += dx;
		y += dy;
		i=i+1;
	}
if(dx1>=dy1)
			{
		steps1 = dx1;
	}
	else
			{
		steps1 = dy1;
	}
	dx1 = dx1/steps1;
	dy1 = dy1/steps1;
	x3 = x1;
	y3 = y1;
	i = 1;
	while(i<= steps1)
	{
		putpixel(x3, y3, BLUE);
		x3 += dx1;
		y3 += dy1;
		i=i+1;
	}
	getch();
	closegraph();
}


