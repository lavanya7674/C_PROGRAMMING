#include<stdio.h>
#include<conio.h>
int main()
{
char s1[10]="lavanya";
int i;
for(i=0;s1[i]!='\0';i++)
{
s1[i]=s1[i]-32;
}
printf("%s",s1);
return 0;
}
