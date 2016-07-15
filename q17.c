#include<stdio.h>
void main()
{
int n1,n,i,r,sum=0;
scanf("%d",&n);

n1=n;
while(n>0)
{
r=n%0;
sum=sum+r*r*r;
n=n/10;
}
if(sum==n1)
printf("armstrong");
}
