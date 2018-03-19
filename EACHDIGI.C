#include<stdio.h>
#include<conio.h>
void main()
{
int n,r;
clrscr();
printf("Enter the number=");
scanf("%d",&n);
while(n!=0)
{
r=n%10;
printf("Number is=%d\n",r);
n=n/10;
}
getch();
}
