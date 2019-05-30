#include <stdio.h>
int main()
{
int n,i,sum=0;
float avg;
printf("enter the value of n \n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
sum=sum+i;
avg=sum/n;
}
printf("\n average of %d number is =%f",n,sum);
return 0;
}
