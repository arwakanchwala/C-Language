#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,a[50],n,temp;
clrscr();
printf("Enter elements you want to input");
scanf("%d",&n);
printf("Enter array elements=");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]<a[j])                                          //a[i]>a[j] 4 ascend
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
for(i=0;i<n;i++)
{
printf("Elements are %d\n",a[i]);
}
getch();
}