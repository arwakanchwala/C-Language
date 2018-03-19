#include<stdio.h>
#include<conio.h>
#define b_salary 1500
#define b_rate 200
#define comm .02
void main()
{
   int quan,B;
   float GS,C,price;
   clrscr();
   printf("Amount of quantity & price=");
   scanf("%d %f",&quan,&price);
   GS=b_salary+b_rate+comm;
   B=b_rate*quan;
   C=comm*quan*price;
   printf("Gross salary=%f",GS);
   printf("Rate=%d",B);
   printf("Commision=%f",C);
   getch();
 }
