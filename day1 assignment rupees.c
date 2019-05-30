#include<stdio.h>
#include<conio.h>
int main()
{
int amount,total;
printf("enter the values ");
scanf("%d",&amount);
total=amount/100;
printf("100 rupees notes are %d",total);
amount-=(total*100);
total=amount/50;
printf("\n 50 rup note are %d",total);
amount-=(total*50);
total=amount/20;
printf("\n 20 rup note are %d",total);
amount-=(total*20);
total=amount/10;
printf("\n 10 rup note are %d",total);
amount-=(total*10);
total=amount/5;
printf("\n 5 rup note are %d",total);
amount-=(total*5);
total=amount/2;
printf("\n 2 rup note are %d",total);
amount-=(total*2);
total=amount/1;
printf("\n 1 rup note are %d",total);
return 0;
}






