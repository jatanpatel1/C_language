//9. Write a program make a summation of given number (E.g., 1523 Ans: -11)

#include<stdio.h>
int main(){
    int value,i,val1,sum=0,ST;
    printf("Enter the positive value :");
    scanf("%d", &value);
    

    for (value; value > 0; value /= 10)
    {
        val1 = value % 10;
        sum += val1;
    }
    printf("%d",sum);
    return 0;
}