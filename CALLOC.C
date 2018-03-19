#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
int i;
float sum=0.0000,*ptr,n;
clrscr();
printf("Enter n=");
scanf("%f",&n);
ptr=(float*)calloc(n ,sizeof(float));
if(ptr==NULL)
{
printf("Insufficient memory");
}
for(i=0;i<n;i++)
{
scanf("%f",(ptr+i));
}
for(i=0;i<n;i++)
{
printf("%f\t",*(ptr+i));
}
for(i=0;i<n;i++)
{
sum=sum + *(ptr+i);
}
printf("\nSum is=%f",sum);
getch();
}