#include <stdio.h>
#include<conio.h>
int main()
{
   int array[10], position, c, n,value,a,i,x;
   printf("Enter number of elements in array\n");
   scanf("%d", &n);
   printf("Enter %d ascending order\n", n);
   for (c = 0; c < n; c++)
   scanf("%d", &array[c]);
   printf("Enter the location where you wish to insert an element\n");
   scanf("%d", &position);
   printf("Enter the value to insert\n");
   scanf("%d", &value);
   for (c = n; c >= position; c--)
   {
   a[i]=a[i-1];
   a[position]=x;
   printf("\n inserted list is :\n");
   for(i=0;i<n;i++)
   printf("%5d",a[i]);
   }
   return 0;
   }
