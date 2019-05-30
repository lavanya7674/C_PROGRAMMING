#include<stdio.h>
int main()
{
int a=10,b=5,temp;
temp=a;
a=b;
b=temp;
printf("after swapping a=%d,b=%d",a,b);
return 0;
}
