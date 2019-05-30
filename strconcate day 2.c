#include<stdio.h>
#include<conio.h>
int main()
{
char s1[10]="hello",s2[10]="hai";
int length=0,i;
length=strlen(s1);
for(i=0;s2[i]!='\0';i++)
{
s1[length]=s2[i];
length++;
}
s1[length]='\0';
printf("%s",s1);
return 0;
}

