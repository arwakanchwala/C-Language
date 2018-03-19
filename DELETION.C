#include<stdio.h>
#include<conio.h>
void delet (int a[],int n,int l);
void main()
{
int a[30],n,i,l;
clrscr();
printf("enter no of elements=");
scanf("%d",&n);
printf("Enter elements=");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Locatio of element to be deleted");
scanf("%d",&l);
delet(a,n,l);
getch();
}
void delet (int a[],int n, int l)
{
int i;
while(l<n)
{
a[l-1]=a[l];
l++;
}
n--;
for(i=0;i<n;i++)
{
printf("%d\t",a[i]);
}
}