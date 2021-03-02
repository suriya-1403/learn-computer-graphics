#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<math.h>

int abs (int n)
{
	return ( (n>0) ? n : ( n * (-1)));
}

void DDA(int X0, int Y0, int X1, int Y1)
{
	int i;
	int dx = X1 - X0;
	int dy = Y1 - Y0;

	int steps = abs(dx) > abs(dy) ? abs(dx) : abs(dy);

	float Xinc = dx / (float) steps;
	float Yinc = dy / (float) steps;

	float X = X0;
	float Y = Y0;
	for (i = 0; i <= steps; i++)
	{
		int tempx=round(X);
		int tempy=round(Y);
		putpixel (tempx,tempy,BLUE);
		X += Xinc;
		Y += Yinc;
		delay(100);

	}
}

int main()
{
	int gd = DETECT, gm;
	initgraph (&gd, &gm, "C:\\Turboc3\\BGI");
     //	int X1=2, Y1=1, X2=12, Y2=6;
	DDA(2,1,12,6);
	return 0;
}
