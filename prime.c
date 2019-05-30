#include<stdio.h>
#include<conio.h>
int main()
{
int n,i,temp=0,j;
printf("enter the values");
scanf("%d",&n);
for(i=2;i<=n;i++)
{
    temp=0;
    for(j=2;j<=i;j++)
{
    if(i%j==0)
    temp++;
}
if(temp==1)
printf("%d\t",i);
}
return 0;
}
