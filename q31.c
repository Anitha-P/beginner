#include<stdio.h>
#include<string.h>
void main()
{
char *str[50];
int count=0;
gets(str);
for(int i=0;i!=strlen(str);i++)
{
if(strcmp(str[i]>='a'||str[i]<='z')
count++;
}
