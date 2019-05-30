#include<stdio.h>
#include<conio.h>
int main()
{
int a=5,b=4,c;
c=a&b;
printf("value of c is %d\n",c);
c=a|b;
printf("value of c is %d\n",c);
c=a^b;
printf("value of c is %d\n",c);
c=a<<2;
printf("value of c is %d\n",c);
c=a>>2;
printf("value of c is %d\n",c);
c=~a;
printf("value of c is %d\n",c);
return 0;
}
