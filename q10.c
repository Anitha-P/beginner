#include<stdio.h>
void main()
{
int n,r,sum=0;
scanf("%d",&n);
while(n>0)
{
sum++;
n=n/10;
}
printf(%d",sum);
}
