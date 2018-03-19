#include<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr();
printf("Enter the number=");
scanf("%d",&a);
if(a%2==0)
{
  printf("%d number is even",a);
}
else
{
  printf("%d is odd number",a);
}
getch();
}