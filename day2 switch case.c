#include<stdio.h>
#include<conio.h>
int main()
{
int n,option,temp,r,e,o,s1,s2,sum,t,t1,a1,a2;
printf("enter the values");
scanf("%d",&n);
printf("enter an option from 2 to 11");
scanf("%d",&option);
switch (option)
{
case 2:
    temp=n%10;
    if(temp%2==0)
    {

printf("divisible by 2 ");
    }
break;
case 3:while(n>0)
{
    r=n%10;
    sum=sum+r;
    n=n/10;
    if(temp%3==0)
    printf("divisible by 3");
    break;
case 4:temp=n%100;
if(temp%4==0)
{
printf("divisible by 4");
}
break;
case 5:temp=n%10;
if(temp%5==0 || temp%5==5)
{
printf("divisible by 5");
}
break;
case 6:if(n%2==0 && n%3==0)
{
printf("divisible by 6");
}
break;
case 7:if(n%7==0)
{
printf("divisible by 7");
}
break;
case 8:temp=n%1000;
if(temp%8==0)
{
printf("divisible by 8");
}
break;
case 9:while(n>0)
{
r=n%10;
sum=sum+t;
n=n/10;
}
if(sum%9==0)
{
    printf("divisible by 9");
}
case 10:temp=n%10;
if(temp==0)
{
    printf("divisible by 10");
}
case 11:while(n>0)
{
    e=n%10;
    s1=s1+e;
    n=n/100;
}
while(n>0)
{
 n=n%10;
 o=n%10;
 s2=s2+o;
 n=n/100;
}
t1=a1-a2;
if(t1%11==0 || t1==s0 || t1/11==11)
{
 printf("divisible by 11");
}
break;
default:
    printf("wrong number");
    break;
}
return 0;
}
}

