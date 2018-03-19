#include<stdio.h>
#include<conio.h>
float largest (float a[], int n);
void main()
{
float a[4] = {2.5,-4.5,1.3,7.2};
clrscr();
printf("Largest value is=%f",largest(a,4));
getch();
}
float largest (float a[], int n)
{
int i;
float max;
max=a[0];
for(i=0;i<n;i++)
{
if(max < a[i])
{
max=a[i];
}
}
return max;
}

