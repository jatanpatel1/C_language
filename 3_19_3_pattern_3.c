/*
A
B C
D E F
G H I J
K L M N O
*/


#include<stdio.h>
int main(){
    int i,j,d;
            d = 65;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf(" %c",d);
            d++;
        }
        printf("\n");
    }
    
    return 0;
}