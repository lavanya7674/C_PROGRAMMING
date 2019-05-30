#include<stdio.h>
#include<conio.h>
int main()
{
int arr[10],i,j,size,count=0;
printf("\n enter the number  of elements in arary :");
scanf("%d",&size);
printf("\n entered elements of an array:",size);
for(i=0;i<size;i++)
{
scanf("%d",&arr[i]);
}
for(i=0;i<size;i++)
{
for(j=1+1;j<=size;j++)
{
if(arr[i]==arr[j])
{
count++;
break;
}
}
}
printf("total number of  duplicate elements in array =%d ",count);
return 0;
}
