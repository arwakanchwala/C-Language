//showing previous value of data memebers corrupt in unions

#include<stdio.h>
#include<conio.h>
#include<string.h>
union Data
{
int i;
float f;
char s[20];
};
union Data data;
void main()
{
//int c;
clrscr();
data.i=10;
data.f=56.6;
//data.c="Tanvi";
strcpy(data.s,"c programming");
printf("data.i=%d\n",data.i);
printf("data.c=%f\n",data.f);
printf("data.s=%s\n",data.s);
getch();
}

