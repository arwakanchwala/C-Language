//print a string using pointer     //pointer4.c another method
//array & while

#include<stdio.h>
#include<conio.h>
void main()
{
char a[10],*p1;
clrscr();
printf("Enter name=");
scanf("%s",a);
p1=a;
while(*p1 != NULL)
{
printf("%c",*p1);
*p1++;
}
getch();
}