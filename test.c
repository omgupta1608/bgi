#include<graphics.h>
#include<conio.h>
#include<stdio.h>

int main(){
	int gd = DETECT, gm;
	initgraph(&gd,&gm,NULL);

	int n;
	scanf("%d", &n);
	for(int i = 0;i < n; i++){
		setcolor(i+1);
		setfillstyle(SOLID_FILL,i);
		circle(200,200,200-(i*10));
	}
	getch();
}