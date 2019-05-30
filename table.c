#include<stdio.h>
#include<conio.h>
int main()
{
int tab,limit,res,i;
printf("enter the value tab number ");
scanf("%d",&tab);
printf("enter the limit");
scanf("%d",&limit);
printf("enter the tab is :\n");
for(i=1;i<=limit;i++)
{
res=i+tab;
printf("%d %d% %d\n",res,i,tab);
}
return 0;
}
