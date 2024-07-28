// 29.Convert minutes into seconds and hours
#include<stdio.h>
int main(){
    int minutes, hours, seconds ; 
    printf("Enter the minutes : ");
    scanf("%d", &minutes);

    seconds = minutes * 60;
    hours = minutes / 60;

    printf("minutes = %d \n",seconds);
    printf("hours = %d \n",hours);
    return 0;
}
