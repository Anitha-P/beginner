#include<stdio.h>
void main()
{ int a,b,temp;
scanf("%d\n%d",&a,&b);
temp=a;
a=b;
b=temp;
printf("a=%d\n b=%d",a,b);
}
