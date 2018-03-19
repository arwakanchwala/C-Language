//define a structure type struct personal that would contain person name,
//dateofjoin,salary & also print the same

#include<stdio.h>
#include<conio.h>
struct personal
{
char name[30];
int day;
char month[10];
int year;
float salary;
};
void main()
{
struct personal person;
clrscr();
printf("Input the details of employee=");
scanf("%s %d %s %d %f",person.name,&person.day,person.month,&person.year
,&person.salary);
printf("Details of employee are as follows");
printf(" %s %d %s %d %f",person.name,person.day,person.month,
person.year,person.salary);
getch();
}