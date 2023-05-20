#include<stdio.h>
void max();
void min();
void sum();
void mean();
void count();
int a[10],n,i;
void main()
{
int c;
printf("enter the array size:\n");
scanf("%d",&n);
printf("enter the arrary elements:\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
do
{
printf("enter the choice:\n 1:maximum\n 2:minimum\n 3:sum\n 4:mean\n 5:count\n");
scanf("%d",&c);
switch(c)
{
case 1: max(); break;
case 2: min(); break;
case 3: sum(); break;
case 4: mean(); break;
case 5: count(); break;
default:printf("plrease enter any choice between 1 to 5");
}
}while(c!=0);
}
void max()
{
int b;
for(i=0;i<n;i++)
{
if(a[i]>b)
{
b=a[i];
}
}
printf("maximum value is %d",b);
}
void min()
{
int x=a[0];
for(i=0;i<n;i++)
{
if(a[i]<x)
{
x=a[i];
}
}
printf("minimum value is %d",x);
}
void sum()
{
int s=0;
for(i=0;i<n;i++)
{
s=s+a[i];
}
printf("sum is%d",s);
}
void mean()
{
float y=0,m,d;
for(i=0;i<n;i++)
{
y=y+a[i];
d++;
}
m=y/d;
printf("mean=%f",m);
}
void count()
{
int c=0;
for(i=0;i<n;i++)
{
c++;
}
printf("count=%d",c);
}

