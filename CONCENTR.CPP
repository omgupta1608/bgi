#include<graphics.h>
#include<conio.h>
#include<stdio.h>

void main(){
int gd = DETECT, gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\bgi");

int n;
scanf("%d", &n);
for(int i = 0;i < n; i++){
setcolor(i+1);
setfillstyle(SOLID_FILL,i);
circle(200,200,200-(i*10));
}
getch();
}