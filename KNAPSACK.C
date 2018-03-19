#include<stdio.h>
#include<conio.h>
void fractional_knapsack(int,float[],float[],float);
void main()
{
float weight[20],profit[20],capacity;
int i,j,n;
float pw_ratio[20],temp;
printf("\n Enter number of items=");
scanf("%d",&n);
printf("\nEnter the weights & profits of each item");
for(i=0;i<n;i++)
{
scanf("%f%f",&weight[i],&profit[i]);
}
printf("Enter the capacity of knapsack=");
scanf("%f",&capacity);
for(i=0;i<n;i++)
{
pw_ratio[i]=profit[i]/weight[i];
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(pw_ratio[i]<pw_ratio[j])
{
temp=pw_ratio[j];
pw_ratio[j]=pw_ratio[i];
pw_ratio[i]=temp;

temp=weight[j];
weight[j]=weight[i];
weight[i]=temp;

temp=profit[j];
profit[j]=profit[i];
profit[i]=temp;
}
}
}
fractional_knapsack(n,weight,profit,capacity);
getch();
}
void fractional_knapsack(int n,float weight[],float profit[],float capacity)
{
float a[20],totalp=0;
int i,j,m;
m=capacity;
for(i=0;i<n;i++)
a[i]=0.0;
for(i=0;i<n;i++)
{
if(weight[i]>m)
break;
else{
a[i]=1.0;
totalp=totalp+profit[i];
m=m-weight[i];
}
}
if(i<n)
a[i]=m/weight[i];

totalp=totalp + (a[i]*profit[i]);
printf("\The resultant array is=");
for(i=0;i<n;i++)
{
printf("[");
printf("%f",a[i]);
printf("]");
}
printf("\n Max no of profit is: %f",totalp);
}


