//swap value using pointers

#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,*p1,*p2,swap;
clrscr();
printf("Enter values of a & b=");
scanf("%d %d",&a,&b);
p1=&a;
p2=&b;
swap=*p1;
*p1=*p2;
*p2=swap;
printf("The value of A=%d & B=%d",*p1,*p2);
getch();
}