#include<stdio.h>
#include<conio.h>
int main()
{
int tab,range,i;
printf("enter the value tab number ");
scanf("%d",&tab);
printf("enter the range");
scanf("%d",&range);
printf("enter the tab is :\n");
for(i=1;i<=range;i++)
{
//res=range*tab;
printf("%d x %d= %d\n",i,tab,i*tab);
}
return 0;
}
