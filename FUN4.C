//to find factors of given number

#include<stdio.h>
#include<conio.h>
void factor (int n);
void main()
{
int n;
clrscr();
printf("Enter number=");
scanf("%d",&n);
factor(n);
getch();
}
void factor (int n)
{
int i,factor;
for(i=1;i<=n;i++)
{
if(n%i == 0)
{
factor=i;
printf("Factors are=%d\n",factor);
}
}
}

