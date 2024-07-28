// 30.WAP to convert years into days and days into years
#include<stdio.h>
int main(){
    int one,years,days;
    printf("Which process to do, select any one. \n");
    printf("1. Years into days ? \n");
    printf("2. Days into years ? \n");
    printf("Select operation 1 or 2 : ");
    scanf("%d", &one);

    if (one == 1)
    {
        printf("Enter years : ");
        scanf("%d", &years);
        printf("Total days in %d year : %d",years,years * 365);
    }

    if (one != 1)
    {
        printf("Enter days : ");
        scanf("%d", &days);
        printf("year : %d",days / 365);
    }
    
    
    return 0;
}
