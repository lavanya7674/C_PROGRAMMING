#include<stdio.h>
#include<conio.h>
int main()
{
char ch;
printf("enter any character");
scanf("%c",&ch);
if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
{
printf("the character is  lower case\n",ch );
}
else (ch=='A' || ch=='Z')
{
printf("enter the character is upper case \n",ch);
}

