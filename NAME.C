#include<graphics.h>
#include<conio.h>
#include<stdio.h>

void main(){
	int gdriver = DETECT, gmode;
	initgraph(&gdriver, &gmode, "C:\\TURBOC3\\BGI");

	// O
	line(100,100,400,100);
	arc(100,155,270,90,50);
	arc(100,255,270,90,50);
	line(100,205,200,205);
	line(200,100,200,305);
	line(250,100,250,305);
	line(250,100,150,10);
	arc(166,30,135,315,25);

	// M
	line(330,100,330,305);
	arc(330,255,90,270,50);
	line(330,205,370,205);
	line(370,100,370,305);

	getch();
	closegraph();
}