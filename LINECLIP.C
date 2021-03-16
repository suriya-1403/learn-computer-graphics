#include<stdio.h>
#include<graphics.h>
#include<math.h>
#include<dos.h>

void liangBarsky(int x1,int y1,int x2,int y2,int xmin,int ymin,int xmax,int ymax){
    int xx1,xx2,yy1,yy2,dx,dy,i;
	float t1,t2,p[4],q[4],t[4];
    setcolor(BLUE);
    line(x1,y1,x2,y2);
	dx=x2-x1;
	dy=y2-y1;

	p[0]=-dx;
	p[1]=dx;
	p[2]=-dy;
	p[3]=dy;

	q[0]=x1-xmin;
	q[1]=xmax-x1;
	q[2]=y1-ymin;
	q[3]=ymax-y1;

	for(i=0;i<4;i++){
		if(p[i]!=0){
			t[i]=q[i]/p[i];
        }
		else{
            if(p[i]==0&&q[i]<0)
                printf("Line is outside of the window");
            else if(p[i]==0&&q[i]>=0)
                printf("Line is inside the window");
        }
	}

	if(t[0]>t[2]){
        t1=t[0];
    }
    else{
        t1=t[2];
    }
    if(t[1]<t[3]){
        t2=t[1];
    }
    else{
        t2=t[3];
    }
	if(t1<t2){
		xx1 = x1 + t1 * dx;
		xx2 = x1 + t2 * dx;
		yy1 = y1 + t1 * dy;
		yy2 = y1 + t2 * dy;
        setcolor(WHITE);
		line(xx1,yy1,xx2,yy2);
	}
    else{
        printf("Line is out of the window");
    }
}

void main()
{
	int i,gd=DETECT,gm;
	int x1=20,y1=120,x2=300,y2=300;
    int wxmin=100,wymin=100,wxmax=250,wymax=250;
    initgraph(&gd,&gm,"c:\\bgi");
    setcolor(BLUE);
	rectangle(wxmin,wymin,wxmax,wymax);
    line(20,20,280,280);
    liangBarsky(x1,y1,x2,y2,wxmin,wymin,wxmax,wymax);
    liangBarsky(20,20,280,280,wxmin,wymin,wxmax,wymax);
    getch();
	closegraph();
}