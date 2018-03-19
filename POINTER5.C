//to read array elements & print their address

#include<stdio.h>
#include<conio.h>
void main()                              //note for arrays:
{                                      //in matrix
int a[3],i;                            //scanf is a[i][j]
clrscr();                              //in structure
printf("Enter elements=");             //printf is "%d"i+1,scanf is s[i].name
for(i=0;i<3;i++)                       //in pointer,if *p not used
scanf("%d",a+i);                       //scanf is a+i
printf("You entered");
for(i=0;i<3;i++)
printf("%d\n",*(a+i));
for(i=0;i<3;i++)
printf("Address of element=%u\t",(a+i));
getch();
}