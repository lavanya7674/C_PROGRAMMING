#include<stdio.h>
#include<conio.h>
int main()
{
int m,w,d,y=365,m1=10,w1=7,t;
printf("enter the no of days \n");
scanf("%lu",&t);
printf("years=%lu \n",t/y);
m=t%y;
printf("months=%d\n",m/m1);
w=m%m1;
printf("weeks=%d \n",w/w1);
d=w/w1;
printf("days=%d \n",w/w1);
return 0;
}
