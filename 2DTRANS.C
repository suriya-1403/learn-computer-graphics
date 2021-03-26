#include<graphics.h>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>

void translation(int arr[],int n){
    int i;
    clrscr();
    outtextxy(20,20,"Translation!");
    for ( i = 0; i < 2*n; i+=2){
        arr[i]+=50;
    }
    for ( i = 1; i < 2*n; i+=2){
        arr[i]+=10;
    }
    setcolor(RED);
    drawpoly(n,arr);
    
}
void rotation(int arr[],int n){
    int th=45,t,v,xp=300,yp=20,i;
    float rad;
    rad=(float)th*3.14f/180;
    clrscr();
    outtextxy(20,20,"Rotation!");
    for ( i = 0; i < (2*n-1); i+=2){
        t=arr[i]-xp;
        v=arr[i+1]-yp;
        arr[i]=xp+floor(t*cos(rad)-v*sin(rad));
        arr[i+1]=yp+floor(v*cos(rad)+t*sin(rad));
    }
    setcolor(BLACK);
    drawpoly(n,arr);
}

void reflection(int arr[],int n){
    int i,tempX,tempY;
    clrscr();
    outtextxy(20,20,"Reflection!");
    tempX=getmaxy()/2;
    
    for ( i = 1; i < 2*n; i+=2){
        arr[i]=tempX+(tempX-arr[i]);
    }
    setcolor(RED);
    drawpoly(n,arr);

    tempY=getmaxx()/2;
    for ( i = 0; i < 2*n; i+=2){
        arr[i]=tempY+(tempY-arr[i]);
    }
    setcolor(GREEN);
    drawpoly(n,arr);
}

void scaling(int arr[],int n){
    int i;
    float sfx=1.5,sfy=1.5;
    clrscr();
    outtextxy(20,20,"Scaling!");
    for ( i = 0; i < 2*n; i+=2){
        arr[i]=arr[0]+(int)((float)(arr[i]-arr[0])*sfx);
    }
    for ( i = 1; i < 2*n; i+=2){
	    arr[i]=arr[1]+(int)((float)(arr[i]-arr[1])*sfy);
    }
    setcolor(RED);
    drawpoly(n,arr);
}

void shearing(int arr[],int n){
    int i;
    float shearX=0.2,shearY=0.3;
    clrscr();
    outtextxy(20,20,"Shearing!");
    for ( i = 0; i < 2*n; i+=2){
        arr[i]+=(shearX*arr[i+1]);
    }

    setcolor(GREEN);
    drawpoly(n,arr);

    for ( i = 1; i < 2*n; i+=2){
        arr[i]+=(shearY*arr[i-1]);
    }
    setcolor(RED);
    drawpoly(n,arr);
}

void main(){
    int gd=DETECT,gm;
    int i;
    int x2,y2,x1,y1,x,y,arr[]={120, 250, 400, 250, 400, 350, 450, 200, 120, 250},n=5;
    initgraph(&gd,&gm,"c:\\bgi");

    setcolor(BLUE);
    drawpoly(n,arr);
    delay(1000);
    translation(arr,n);
    delay(1000);
    clrscr();

    setcolor(BLUE);
    drawpoly(n,arr);
    delay(1000);
    rotation(arr,n);
    delay(1000);
    clrscr();

    setcolor(BLUE);
    drawpoly(n,arr);
    delay(1000);
    reflection(arr,n);
    delay(1000);
    clrscr();

    setcolor(BLUE);
    drawpoly(n,arr);
    delay(1000);
    scaling(arr,n);
    delay(1000);
    clrscr();

    setcolor(BLUE);
    drawpoly(n,arr);
    delay(1000);
    shearing(arr,n);


    getch();
    closegraph();
}