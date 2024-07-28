// 2. WAP of Addition, Subtraction, Multiplication and Division using Switch
// case.(Must Be Menu Driven)

#include<stdio.h>
int main(){
    int a,b,ans;
    char op;
    printf("Enter the first integer value : ");
    scanf("%d", &a);
    printf("Enter the second integer value : ");
    scanf("%d", &b);
printf("\n------------------------------------------------------\n");
    printf("Select operation \n");
printf("\n------------------------------------------------------\n");
    printf("Addition '+' \n");
    printf("Subtraction '-' \n");
    printf("Multiplication '*' \n");
    printf("Division '/' \n");
printf("\n------------------------------------------------------\n");
    printf("Operation : ");
    scanf(" %c", &op);
printf("\n------------------------------------------------------\n");
    switch (op)
    {
    case '+':
        ans = a + b;
        printf("Your Ans is : %d + %d = %d",a,b,ans);
        break;
    
    case '-':
        ans = a - b;
        printf("%d - %d = %d",a,b,ans);
        break;

    case '*':
        ans = a * b;
        printf("%d x %d = %d",a,b,ans);
        break;

    case '/':
        ans = a / b;
        printf("%d / %d = %d",a,b,ans);
        break;

    default: printf("Enter the valid operation");
        break;
    }
    return 0;
}