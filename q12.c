#include<stdio.h>
void main()
{
int n,n1,r,sum=1;
scanf("%d",&n);

n1=n;
while(n>0)
{
r=n%10;
sum=sum*10+r;
n=n/10;
}
if(n==n1)
printf("palindrome");
else
printf("not palindrome");
}
