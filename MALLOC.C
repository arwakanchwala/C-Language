#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
void main()
{
int *ptr,i,n,sum=0;
clrscr();
printf("Enter n=");
scanf("%d",&n);
ptr=(int*)malloc(n* sizeof(int));
if(ptr==NULL)
{
printf("Insufficient memory");
}
for(i=0;i<n;i++)
{
scanf("%d",(ptr+i));
}
for(i=0;i<n;i++)
{
printf("%d",*(ptr+i));
}
for(i=0;i<n;i++)
{
sum=sum+ *(ptr+i);
}
printf("Sum is %d",sum);
getch();
}