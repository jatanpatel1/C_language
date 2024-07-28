//2. WAP to accept 5 numbers from user and display all numbers

#include<stdio.h>
int main(){
    int i,num1 = 1,num2 = 2,num3 = 3,num4 = 4,num5 = 5;
    printf("\n\n-------------------- Enter 5 number -----------------\n\n");
    for (i = 1; i <= 5; i++)
    {
        printf("Enter %d number : ",i);
        if (num1 == i)
        {
            scanf("%d", &num1);
        }else if (num2 == i)
        {
            scanf("%d", &num2);
        }else if (num3 == i)
        {
            scanf("%d", &num3);
        }else if (num4 == i)
        {
            scanf("%d", &num4);
        }else if (num5 == i)
        {
            scanf("%d", &num5);
        }else{
            printf("run again\n");
        }
        
    }
    printf("%d,%d,%d,%d,%d",num1,num2,num3,num4,num5);
    
    return 0;
}