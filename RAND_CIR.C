#include<graphics.h>
#include<conio.h>
#include<stdio.h>

void main(){
	int gdriver = DETECT, gmode;
	initgraph(&gdriver,&gmode,"C:\\TURBOC3\\BGI");

//	int x = getmaxx(), y = getmaxy();
	while(!kbhit()){
		int x1 = (rand()%200) + 10;
		int y1 = (rand()%200) + 10;
		int r = rand()%50;
		int color = getmaxcolor();
		circle(x1,y1,r);

		setfillstyle(rand()%10,color);
		floodfill(x1,y1,color);

		delay(500);
	}

	getch();
	closegraph();
}