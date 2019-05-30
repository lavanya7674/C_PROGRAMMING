#include<stdio.h>
#include<conio.h>
int main()
{
char emp[10];
int hrs,sal;
float salary;
printf("enter the emp id");
scanf("%s",&emp);
printf("enter hrs");
scanf("%d",&hrs);
printf("enter salary");
scanf("%d",&sal);
salary=sal*hrs;
printf("emp=%s\n hrs=%d\n salary=%f\n",emp,hrs,salary);
return 0;
}
