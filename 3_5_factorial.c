//5. WAP to print factorial of given number

#include<stdio.h>
int main(){
    int a ,i,ans = 1; 
    printf("Enter value for factorial  : ");
    scanf("%d", &a);

    for (i = 1; i <= a; i++)
    {
        ans *= i;
    }
        printf("Factorial for given number = %d",ans);
    
    return 0;
}