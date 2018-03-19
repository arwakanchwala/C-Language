//to compute square of n numbers     //wid retrn & argument
				     //to multiply
#include<stdio.h>
#include<conio.h>
int sumofsquare (int b);             //int mul(int,int);
void main()
{
int n,x;
clrscr();
printf("Enter the value of n=");       //take 2 num
scanf("%d",&n);
x=sumofsquare(n);                      //x=mul(a,b);
printf("%d",x);
getch();
}
int sumofsquare (int n)               //int mul (int a,int b)
{
int i,sum=0;                          //take var res
for(i=1;i<=n;i++)                     //res=a*b;
{                                     //return res;
sum=sum+i*i;
}
return sum;
}

