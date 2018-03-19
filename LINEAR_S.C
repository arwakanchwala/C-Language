#include<stdio.h>
#include<conio.h>
void main()
{
int search,a[50];
int n,i;
clrscr();
printf("Enter elements you want to input=");
scanf("%d",&n);
printf("Enter array elements=");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Enter element you want to search=");
scanf("%d",&search);
for(i=0;i<n;i++)
{
if(a[i]==search)
{
printf("%d is found at location %d",search,i+1);
break;
}
}
if(i==n)
{
printf("Search is unsuccessfull");
}
getch();
}