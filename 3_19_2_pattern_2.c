/*
A 
A B
A B C 
A B C D
A B C D E
*/
#include<stdio.h>
int main(){
    int i,j,d;
    for (i = 1; i <= 5; i++)
    {
            d = 65;
        for (j = 1; j <= i; j++)
        {
            printf(" %c",d);
            d++;
        }
        printf("\n");
    }
    
    return 0;
}