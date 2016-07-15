#include<stdio.h>
void main(){
int a,b,c;
scanf("%d%d%d",&a,&b,&c);
if(a>b&&a>c)
printf("%d is great",a);
else if(b>a&&b>c)
printf("%d is great",b);
else
printf("%d is great",c);
}
