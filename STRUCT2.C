//comparison of structure variable

#include<stdio.h>
#include<conio.h>
struct student
{
int number;
char name[30];
float marks;
};
void main()
{
int x;
struct student p1={111,"x1",34};
struct student p2={222,"x2",42};
struct student p3;
p3=p2;
//clrscr();
x=((p2.number==p3.number) && (p2.marks==p3.marks))?1:0;
if(x==1)
{
printf("Both the studens p2 &p3 are same\n");
printf("%d\n %s\n %f\n",p2.number,p2.name,p2.marks);
}
else
printf("Studnts are not same");
getch();
}