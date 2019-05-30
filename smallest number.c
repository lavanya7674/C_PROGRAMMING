#include<stdio.h>
#include<conio.h>
 int main()
{
int i,n,j;
float arr[10];
printf("\n enter the total number of elemets");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
printf("enter the number %d:",i+1);
scanf("%f",&arr[i]);
}
for(i=1;i<n;i++)
{
if(arr[0]<arr[j])
arr[0]=arr[i];
}
printf("second element=%2f",arr[0]);
return 0;
}
