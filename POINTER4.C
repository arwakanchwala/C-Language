//print string using pointer(string & for)       //method1(pointer3.c)

#include<string.h>
#include<stdio.h>
#include<conio.h>
void main()
{
char str[20],*p1;
clrscr();
printf("Enter the string=");
gets(str);
p1=str;
for(*p1=str[0];*p1!=NULL;*p1++)
{
printf("%c",*p1);              //its %c coz it takes character one by one
}
getch();
}