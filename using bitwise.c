#include<stdio.h>
int main()
{
int x=11,y=20;
x=x^y;
y=x^y;
x=x^y;
printf("after swapping x=%d,y=%d",x,y);
return 0;
}
