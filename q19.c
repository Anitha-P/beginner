#inlcude<stdio.h>
void main()
{
int n,fact;
scanf("%d",&n);
fact(n);
}
void fact(int n)
{
if(n==0||n==1)
fact=1;
else
fact=n*(n-1);
printf("%d",fact);
}
