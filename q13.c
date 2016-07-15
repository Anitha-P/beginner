#inlcude<stdio.h>
void main()
{
int n;
scanf("%d",&n);
for(i=2;i<n;i++)
{
if(n%i==0){
count=0;
break;}
else
count=1;
if(count==1)
printf("prime number");
else
printf(not prime");
}}
