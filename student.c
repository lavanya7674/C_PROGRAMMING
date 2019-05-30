#include<stdio.h>
#include<conio.h>
int main()
{
int n,max,m1,m2,m3,m4,m5,total,avg,grade,percent;
printf("enter the no of subjects :\n");
scanf("%d",&n);
max=(n*100);
printf("maximum marks:%d\n",n);
printf("enter %d marks:\n",n);
scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);
total=m1+m2+m3+m4+m5;
printf("total is %d",total);
avg=(total)/n;
printf("average is %d",avg);
percent=(total*100)/max;
printf("percent is %d",percent);
if(total>=400)
{
printf("grade='o' and your percent is %d",percent);
}
else if(total>300 && total<=399)
{
    printf("grade='e' and your percent is %d",percent);
}
else if(total>200 && total<=299)
{
    printf("grade='a' and your percent is %d",percent);
}
else if(total>
        100 && total<=199)
{
printf("grade='f' and your percent is %d",percent);
}
return 0;
}
