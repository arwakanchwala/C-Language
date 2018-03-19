//write c program to find whether digit d is present in number or not.
//If it is,find from right to left.

#include<stdio.h>
#include<conio.h>
int findposition(int n, int d);              //to find last digit
void main()                                  //lastdig=n%10;
{                                            //first digit
int n,d,pos;                                 //take n,then first =n;
clrscr();                                    //while(first>=0)
					     //{ first=first/1o; }
printf("Enter number & digit you are searching for=");
scanf("%d %d",&n,&d);
pos=findposition(n,d);
if(pos==-1)
printf("\ndigit %d is not present in number%d",d,n);
else
{
printf("Digit %d is present in number %d at position %d",d,n,pos);
}
getch();
}
int findposition (int n, int d)
{
int k=1;
while (n>0)
{
if(n%10==d)
 {
 return k;
 }
 n=n/10;
 k++;
 }
 return -1;
}