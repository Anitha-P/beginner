#include<stdio.h>
void main()
{
char c;
scanf("%c",c);
if(c>='A'&&c<='Z'||c>='a'&&c<='z')
printf("alphabet");
else
printf("other character");
}
