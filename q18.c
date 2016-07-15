#include<stdio.h>
void main()
{
int min,max,i;
scanf("%d%d",&min,&max);
for(i=min;i<max;i++)
arm(i);
}
void arm(int n)
{
int n1,r,sum=0;
n1=n;
while(n>0)
{
r=n%0;
sum=sum+r*r*r;
n=n/10;
}
if(sum==n1)
printf("%d",sum);
}
