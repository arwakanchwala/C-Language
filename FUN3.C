//maximum of three numbers

#include<stdio.h>
#include<conio.h>
int max3 (int,int,int);
void main()
{
int i,a,b,c;
clrscr();
printf("Enter the values of a,b&c=");
scanf("%d %d %d",&a,&b,&c);
i=max3(a,b,c);
printf("Max is=%d",i);
getch();
}
int max3 (int x, int y, int z)
{
int max;
if(x>y)
{
max=x;
}
else
{
max=y;
}
if(z>max)
{
max=z;
}
return max;
}