//add numbers using pointers

#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,*p1,*p2,sum;
clrscr();
a=12;
b=5;
p1=&a;
p2=&b;
sum=*p1 + *p2;
printf("Addition is=%d",sum);
getch();
}