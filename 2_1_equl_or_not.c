// 1. Write a C program to accept two integers and check whether they are equal
// or not

#include<stdio.h>
int main(){
    int value1,value2;
    printf("Enter the value one ");
    scanf("%d",&value1);

    printf("Enter the value two ");
    scanf("%d",&value2);

    value1 == value2 ? printf("same value"):printf("not same");
    return 0;
}
