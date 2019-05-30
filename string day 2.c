#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
char s1[10]="lavanya",s2[10]="sunitha",s3;
int option,len;
printf("enter a option");
scanf("%d",&option);
switch(option)
{
case 1:strcpy(s1,s2);
printf("string is %s",s1);
break;
case 2:strcat(s1,s2);
printf("the ans is %s",s1);
break;
case 3:s3=strcmp(s1,s2);
if(s3==0)
    printf("equal");
else
    printf("not equal");
printf("string is %s %s",s1,s3 );
break;
case 4:strupr(s1);
printf("string is upper %s",s1);
break;
case 5:len=strlen(s1);
printf("length is string %d",len);
break;
case 6:strlwr(s1);
printf("string is lower %s",s1);
break;
default:printf("something else");
break;
}
return 0;
}

