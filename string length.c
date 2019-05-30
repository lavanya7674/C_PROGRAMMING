#include<stdio.h>
#include<conio.h>
int main()
{
char str1[10]="hello";
int length=0;
while(str1[length]!='\0')
{
    length++;
}
printf("%d",length);
return 0;
}
