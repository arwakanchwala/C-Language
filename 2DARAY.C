//compile time initialization                     //for run time

#include<stdio.h>
#include<conio.h>
void main()
{
int i,j;
int a[2][2]={1,2,3,4};                            //dont declare numbers
clrscr();
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
printf("a[%d][%d]=%d\n",i,j,a[i][j]);        //before this line,underloop
}                                    //printf("Enter no=a[%d][%d]",i,j);
}                                    //scanf("%d",&a[i][j]);
for(i=0;i<2;i++)                     //then the given line
{
for(j=0;j<2;j++)
{
printf("%d\t",a[i][j]);
}
printf("\n");
}
getch();
}