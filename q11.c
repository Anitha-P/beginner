#include<stdio.h>
#include<math.h>
void main()
{
int i,x,n;
scanf("%d\n%d",&x,&n);
for(i=0;i<n;i++)
x=pow(x,n);
printf("%d",x);
}
