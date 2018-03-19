#include<stdio.h>
#include<conio.h>
float ratio (int, int, int);
int difference(int,int);
void main()
{
int x,y,z;
clrscr();
printf("Enter the values of x,y & z=");
scanf("%d %d %d",&x,&y,&z);
printf("The ratio is=%f",ratio(x,y,z));
getch();
}
float ratio (int x, int y, int z)
{
if(difference(y,z))
{
return (x/(y-z));
}
return 0.0;
}
int difference(int p, int q)
{
if(p!=q)
{
return 1;
}
else
{
return 0;
}
}