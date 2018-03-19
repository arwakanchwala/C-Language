#include<stdio.h>
#include<conio.h>
void inser (int b, int a[], int c, int l);
void main()
{
int a[10],b,c,l,i;
clrscr();
printf("Enter no of elements=");
scanf("%d",&b);
printf("Enter your elements=");
for(i=0;i<b;i++)
{
scanf("%d",&a[i]);
}
printf("Enter your element that you want to insert");
scanf("%d",&c);
printf("Enter location=");
scanf("%d",&l);
inser(b,a,c,l);
getch();
}
void inser (int b, int a[], int c, int l)
{
int i;
for(i=b;i>=l;i--)
{
a[i]=a[i-1];
}
b++;
a[l-1]=c;
for(i=0;i<b;i++)
{
printf("%d\t",a[i]);
}
}