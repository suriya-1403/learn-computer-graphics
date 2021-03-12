#include<stdio.h>
#include<graphics.h>
#include<dos.h>
#include<conio.h>

//Mid point circle drawing algorithm
void midPointCircleDraw(int x_centre, int y_centre, int r)
{
    int x = r, y = 0,P;
    if (r > 0)
    {
	putpixel(x+x_centre,-y+y_centre,WHITE);
	putpixel(y+x_centre,x+y_centre,WHITE);
	putpixel(-y+x_centre,x+y_centre,WHITE);
    }

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
	putpixel(x+x_centre,y+y_centre,BLUE);
	putpixel(-x+x_centre,y+y_centre,BLUE);
	putpixel(x+x_centre,-y+y_centre,BLUE);
	putpixel(-x+x_centre,-y+y_centre,BLUE);
	if (x != y)
	{
	    putpixel(y+x_centre,x+y_centre,RED);
	    putpixel(-y+x_centre,x+y_centre,RED);
	    putpixel(y+x_centre,-x+y_centre,RED);
	    putpixel(-y+x_centre,-x+y_centre,RED);
	}
    }
}

//Digital differential algorithm
void Bresenham_Box()
{
    int x,a, y, x1, y1, x2, y2, Dx, Dy, twoDx, twoDy, twoDyDx, p, end;
    for(a=1;a<5;a++){
        if(a==1){
            x1=100; 
            y1=100;
            x2=300;
            y2=100;
        }
        if(a==2){
            x1=300;
            y1=100; 
            x2=300;
            y2=300;
        }
        if(a==3){
            x1=300;
            y1=300;
            x2=100; 
            y2=300;
        }
        if(a==4){
            x1=100;
            y1=300; 
            x2=100;
            y2=100;
        }
        if(x1==x2){
            x=x1;
            y=y1;
            while(y!=y2){
                if((y2-y1)>0)
                    ++y;
                else
                    --y;
                putpixel(x,y,BLUE);
            }
            if(y1>=y2){
                x=x2;
                y=y2;
                end=y2;
            }
        }
        if(x1<x2){
            x=x1;
            y=y1;
            end=x2;
        }
        else{
            x=x2;
            y=y2;
            end=x1;
        }
        putpixel(x,y,BLUE);
        Dx=abs(x1-x2);
        Dy=abs(y1-y2);
        twoDy=2*Dy;
        twoDyDx=2*(Dy-Dx);
        p=2*Dy-Dx;
        while(x<end){
            if(p<0){
                x++;
                p+=twoDy;
            }
            else{
                x++;
                y++;
                p=twoDyDx;
            }
            putpixel(x,y,BLUE);
        }
    }
}

int main()
{
	int gd = DETECT, gm;
	initgraph (&gd, &gm, "C:\\BGI");
	clrscr();
    // Square Box
    Bresenham_Box();

    // Concentric Circle
    midPointCircleDraw(200,200,20);
    midPointCircleDraw(200,200,40);
    midPointCircleDraw(200,200,60);
    midPointCircleDraw(200,200,80);
    midPointCircleDraw(200,200,100);

    // Outer circle
    midPointCircleDraw(100,100,50); // LT
    midPointCircleDraw(300,100,50); // RT
    midPointCircleDraw(100,300,50); // LD
    midPointCircleDraw(300,300,50); // RD
	getch();
	return 0;
}
