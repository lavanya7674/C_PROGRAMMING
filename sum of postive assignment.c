#include<stdio.h>
#include<conio.h>
int main()
{
    int total;
    int i;
    int positiveSum = 0;
    int negativeSum = 0;
    printf("How many numbers you want to add : ");
    scanf("%d",&total);
    int numbers[total];
    for(i=0; i<total; i++){
        printf("Enter number %d : ",(i+1));
        scanf("%d",&numbers[i]);
    }
    for(i=0 ; i<total ; i++){
       if(numbers[i] < 0){
         negativeSum += numbers[i];
       }else{
         positiveSum += numbers[i];
       }
    }
    printf("You have entered : \n");
    for(i=0 ; i<total; i++){
     printf("%d ",numbers[i]);
    }
    printf("\nPositive numbers sum : %d",positiveSum);
    printf("\nNegative numbers sum : %d\n",negativeSum);

}
