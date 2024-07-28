
// 12.WAP to find maximum number among 3 numbers using ternary operator
#include<stdio.h>
int main(){
    int n1 = 2445, n2 = 38362 , n3 = 92, n;
    n = n1 > n2 ?  n1 : n2;
    n > n3 ? printf("maximum value : %d",n): printf("maximum value : %d",n3);

    return 0;
}