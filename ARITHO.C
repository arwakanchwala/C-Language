#include<stdio.h>
#include<conio.h>
void main()
{
int days,month;
clrscr();
printf("Enter days:");
scanf("%d",&days);
month=days/30;
days=days%30;
printf("Month=%d",month);
printf("Days=%d",days);
getch();
}