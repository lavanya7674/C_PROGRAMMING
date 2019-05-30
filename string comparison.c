#include<stdio.h>
#include<conio.h>
int main()
{
char s1[10]="hello",s2[10]="hello";
int t,i;
for(i=0;s1[i]!='\0';i++)
{
if(s1[i]==s2[i])
t=1;
else
t=0;
}
if(t==1)
printf("t1 is equal");
else
printf("t1 is not equal");
return 0;
}
