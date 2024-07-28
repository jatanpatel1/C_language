//4. WAP to find factorial using recursion

#include<stdio.h>
long int multiplyNumbers(int);
int main() 
{
    int num;
    printf("Enter number for factorial : ");
    scanf("%d",&num);
    printf("Factorial of %d = %ld", num, multiplyNumbers(num));

}

long int multiplyNumbers(int ans) 
{
    if (ans>=1)
        return ans*multiplyNumbers(ans-1);
    else
        return 1;
}

