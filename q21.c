#include<stdio.h>
void main()
{
int a=0,b=1,c,i,n;
scanf("%d",&n);
printf("\n %d\n %d",a,b);
for(i=0;i<n;i++)
{
c=a+b;
printf("%d",c);
a=b;
b=c;
}
}
