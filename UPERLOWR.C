#include<stdio.h>
#include<conio.h>
#include<ctype.h>
void main()
{
char alphabet;
clrscr();
printf("Enter an alphabet");
alphabet=getchar();
if(islower(alphabet))
{
putchar(toupper(alphabet));
}
else
{
  putchar(tolower(alphabet));
}
getch();
}
