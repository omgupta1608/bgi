#include<graphics.h>
#include<conio.h>
#include<stdio.h>

void drawCar(int pos){
	// car body
	line(pos + 0,200,pos + 40,200);
	line(pos + 0,200,pos + 0,250);
	line(pos + 0,250,pos + 30,250);
	line(pos + 40,200,pos + 100,150);
	line(pos + 100,150,pos + 200,150);
	line(pos + 200,150,pos + 260,200);
	line(pos + 260,200,pos + 300,200);
	line(pos + 300,200,pos + 300,250);
	line(pos + 300,250,pos + 270,250);
	line(pos + 80,250,pos + 220,250);

	// windows
	line(pos + 40,200,pos + 260,200);

	// wheel arc 1
	arc(pos + 55,250,0,180,25);
	// wheel arc 2
	arc(pos + 245,250,0,180,25);

	// wheels
	circle(pos + 55,250,20);
	circle(pos + 245,250,20);

	// ground
	line(0,270,500,270);

	// grass
	line(500 - pos, 270, 495 - pos, 265);
	line(500 - pos, 270, 505 - pos, 265);
	line(500 - pos, 270, 500 - pos, 265);

	line(470 - pos, 270, 465 - pos, 265);
	line(470 - pos, 270, 475 - pos, 265);
	line(470 - pos, 270, 470 - pos, 265);

	line(450 - pos, 270, 455 - pos, 265);
	line(450 - pos, 270, 445 - pos, 265);
	line(450 - pos, 270, 450 - pos, 265);

	line(430 - pos, 270, 425 - pos, 265);
	line(430 - pos, 270, 435 - pos, 265);
	line(430 - pos, 270, 430 - pos, 265);

	line(200 - pos, 270, 195 - pos, 265);
	line(200 - pos, 270, 205 - pos, 265);
	line(200 - pos, 270, 200 - pos, 265);

	line(220 - pos, 270, 225 - pos, 265);
	line(220 - pos, 270, 215 - pos, 265);
	line(220 - pos, 270, 220 - pos, 265);

	line(300 - pos, 270, 295 - pos, 265);
	line(300 - pos, 270, 305 - pos, 265);
	line(300 - pos, 270, 300 - pos, 265);

	line(180 - pos, 270, 175 - pos, 265);
	line(180 - pos, 270, 185 - pos, 265);
	line(180 - pos, 270, 180 - pos, 265);
}

void main(){
	int gdriver = DETECT, gmode;
	int pos = 0;
	initgraph(&gdriver,&gmode,"C:\\TURBOC3\\BGI");

	while(!kbhit()){
		if(pos == 200) pos = 0;
		drawCar(pos);
		delay(50);
		cleardevice();
		pos++;
	}

	getch();
	closegraph();
}