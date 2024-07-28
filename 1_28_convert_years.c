// 28.Convert years into days and months

#include<stdio.h>
int main(){
    int year, days, months ; 
    printf("Enter the year : ");
    scanf("%d", &year);

    days = year * 365;
    months = year * 12;

    printf("Days = %d \n",days);
    printf("Months = %d \n",months);
    return 0;
}
