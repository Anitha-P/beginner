#include<stdio.h>
#include<string.h>
void main()
{
char *str[50];
int count=0;
gets(str);
for(int i=0;i!=strlen(str);i++)
{
if(str[i]>='a'||str[i]<='z'||str[i]>='1'||str[i]<='9'||str[i]=='\0'||str[i]=='')
count=count;
else
count++;
}
