// 13.WAP to find minimum number among 3 numbers using ternary operator
#include<stdio.h>
int main(){
    int n1 = 1, n2 = 6 , n3 = 45, n;
    n = n1 < n2 ?  n1 : n2;
    n < n3 ? printf("minimum value : %d",n): printf("minimum value : %d",n3);
    return 0;
}