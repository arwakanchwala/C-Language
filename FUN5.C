//to find factorial

#include<stdio.h>
#include<conio.h>
int factor (int);
void main()
{
int a,ans;
clrscr();
printf("Enter the number=");
scanf("%d",&a);
ans=factor(a);
printf("Factorial of %d is=%d",a,ans);
getch();
}
int factor (int n)
{
int factorial;
if(n==1)
{
return 1;
}
else
//{
factorial=n*factor(n-1);
//}
return factorial;
}
