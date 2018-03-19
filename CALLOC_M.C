#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
void main()
{
int *ptr,n,i,max;
clrscr();
printf("Enter n=");
scanf("%d",&n);
ptr=(int*)calloc(n,sizeof(int));
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
printf("%d\t",*(ptr+i));
}
max=*(ptr+0);
for(i=0;i<n;i++)
{
if(max < *(ptr+i))
{
max= *(ptr+i);
}
}
printf("\nMax=%d",max);
getch();
}