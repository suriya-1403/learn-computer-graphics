#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
void midPointCircleDraw(int x_centre, int y_centre, int r)
{
    int x = r, y = 0,P,x_ref,y_ref;
    P = 1 - r;
    while (x > y)
    {
	y++;
	if (P <= 0)
	    P = P + 2*y + 1;
	else
	{
	    x--;
	    P = P + 2*y - 2*x + 1;
	}
	if (x < y)
	    break;
    x_ref=x_centre;
    y_ref=y_centre+100;
	putpixel(-x+x_centre,y+y_centre,BLUE);  //bl
	putpixel(x+x_ref,-y+y_ref,BLUE);  //tr
	if (x != y)
	{
	    putpixel(-y+x_centre,x+y_centre,BLUE); //bl
	    putpixel(y+x_ref,-x+y_ref,BLUE); //tr
	}
    }
}

int main()
{
    int gd = DETECT, gm;
    initgraph (&gd, &gm, "C:\\BGI");
    clrscr();
    midPointCircleDraw(100,100, 50);
    getch();
    return 0;
}