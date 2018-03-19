//matrix chain multiplication
#include<stdio.h>
#include<conio.h>
#include<limits.h>
int mcm(int[],int,int);
void main()
{
int n,i,a[10];
clrscr();
printf("Enter number of elements=");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Minimum number of matrix multiplication is %d",mcm(a,1,n-1));
getch();
}
int mcm(int p[],int i,int j)
{
int k;
int min=INT_MAX;
int count;
if(i==j)
return 0;

for(k=i;k<j;k++)
{
count=mcm(p,i,k) + mcm(p,k+1,j) + p[i-1]*p[k]*p[j];
if (count<min)
min=count;
}
return min;
}