// 18. Write a C program to calculate profit and loss on a transaction
#include<stdio.h>
int main(){
    int cprice, sprice, PL; 
    printf("Enter the cost price of the item : ");
    scanf("%d", &cprice);

    printf("Enter the selling price of the item : ");
    scanf("%d", &sprice);

    PL = sprice - cprice;
    if (PL > 0)
    {
        printf("profit = %d",PL);
    }else{
        printf("Loss = %d",PL);
    }
    
    return 0;
}