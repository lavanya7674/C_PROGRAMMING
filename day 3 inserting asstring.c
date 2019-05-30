#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
char a1[20],a2[20],a3[20];
int i,p,t;
printf("enter the  a1:\n");
gets(a1);
printf("enter the  a2: \n");
gets(a2);
printf("enter the position: \n");
scanf("%d",&p);
for(i=0;i<p;i++)
{
    a3[i]=a1[i];
    t=p;
}
for(i=0;a2[i]!='\0';i++)
{
  a3[p]=a2[i];
  p++;
}
for(i=t;a1[i]!='\0';i++)
{
    a3[p]=a1[i];
    p++;
}
 a3[p]='\0';
 puts(a3);
}
