#include<stdio.h>
int main()
{
int l,w;
float area,perimeter;
printf("enter length and width values to cal area and per of rectangle \n");
scanf("%d %d",&l,&w);
area=w*l;
perimeter=2*(l+w);
printf("\n area of recatangle =%f",area);
printf("\n perimeter of rectangle=%f",perimeter);
return 0;
}
