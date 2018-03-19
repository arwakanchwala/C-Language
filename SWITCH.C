//number from 1 to 5,if -ve &>5,diplay msg
#include<stdio.h>
#include<conio.h>
void main()
{
int number;
clrscr();
printf("Enter number=");
scanf("%d",&number);
switch(number)
{
case 1:
printf("The given number is 1");
break;
case 2:
printf("The given number is 2");
break;
case 3:
printf("The given number is 3");
break;
case 4:
printf("The given number is 4");
break;
case 5:
printf("The given number is 5");
break;
default:
if(number<0)
{
printf("It is a negative number");
}
else
{
printf("Number is greater than 5");
}
break;
}
getch();
}