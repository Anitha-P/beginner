#include<stdio.h>
void main()
{
int n;int sum=0;
for(i=0;i<=15;i++)
sum=sum+i;
printf("%d",sum);
for(i=15;i<=445;i++)
{if(i%2==0)
sum=sum+i;
else
sum=sum+0;
}
printf("%d",sum);
}
