#include<stdio.h>
int main()
{
int min,max;
scanf("%d\n %d",&min,&max);
for(int i=min;i<max;i++)
odd(i);
}
 odd(int x){
if(x%2==0)
break;
else
printf("%d",x);
}
