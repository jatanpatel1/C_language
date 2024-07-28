//13. calculate the Factorial of a Given Number using while loop

#include<stdio.h>
int main(){
    int value,ans=1;
    printf("Enter the value for factorial : ");
    scanf("%d", &value);

    int i = value;

    while (i > 0)
    {
        ans *= i;
        i--;
    }
    printf("%d Factorial is %d",value,ans);
    
    return 0;
}