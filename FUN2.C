//swap two values                //fun wid no return & arg
				 //so print in last section
#include<stdio.h>
#include<conio.h>
void swap (int a,int b);
void main()
{
int a,b;
clrscr();
printf("Enter the values of a & b=");
scanf("%d %d",&a,&b);
swap(a,b);                                    //no var here
getch();
}
void swap (int a,int b)
{
int temp;
temp=a;
a=b;
b=temp;
printf("A=%d B=%d",a,b);
}
