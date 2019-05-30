#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
char s1[10]="hello",s2[10];
int length=0,i;
length=strlen(s1)-1;
for(i=0;s1[i]!='\0';i++)
{
s2[length]=s1[i];
length--;
}
printf("%s",s2);
return 0;
}

