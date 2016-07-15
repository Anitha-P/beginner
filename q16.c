#include<stdio.h>
void main()
{
int min,max,i;
scanf("%d%d",&min,&max);
for(i=min;i<max;i++)
prime(i);
}
void prime(int n)
{
for(i=2;i<n;i++)
{
if(n%i==0)
{
count=0;
break;
}
else
count=1;
if(count==1)
printf("%d",n);
}
