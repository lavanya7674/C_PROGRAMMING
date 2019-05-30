#include<stdio.h>
#include<conio.h>
int main()
{
int i,j,k,n;
printf("enter the no of rows");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
for(j=n-1;j>=i;j--)
{
printf("*");
}
printf("\n");
}
for(k=1;k<=i;k++)
{
printf("*");
}
printf("\n");
return 0;
}

