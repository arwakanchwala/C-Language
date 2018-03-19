//proper use of unions using c program

#include<stdio.h>
#include<conio.h>
#include<string.h>
union data
{                                       //print each data separately
int i;
float f;
char str[30];
};
void main()
{
union data data1;
clrscr();
data1.i=27;
printf("Data.i=%d\n",data1.i);
data1.f=30.32;
printf("Data.f=%f\n",data1.f);
strcpy(data1.str,"Java Programming");
printf("Data.str=%s\n",data1.str);
getch();
}
