//18. Write a C Program to Print the Multiplication Table of N
// i. E.g. 5 * 1 = 5
// ii. 5 * 2 = 10
// 1. .
// 2. .
// iii. 5 * 10 = 50

#include<stdio.h>
int main(){
    int table,i=1,ans;
    printf("Enter value for table : ");
    scanf("%d", &table);
    while (i <=10)
    {
        printf("%d x %d = %d\n",table,i,table*i);
        i++;
    }
    
    return 0;
}