#include<stdio.h>
#include<conio.h>
 int main()
  {
   int arr[20],i,n,sum=0;
   printf("How many elements you want to enter: ");
   scanf("%d",&n);
   printf("Enter any %d elements in Array: ",n);
   for(i=0;i<n;i++)
   {
   scanf("%d",&arr[i]);
   }
   printf("Sum of Array Elements: ");

   for(i=0;i<n;i++)
   {
    sum=sum+arr[i];
   }
   for(i=0;i<n;i++)
   {
   }
  printf("%d ",sum);
  return 0;
  }
