// 4. WAP to make simple calculator (operation include Addition, Subtraction,
// Multiplication, Division, modulo) using conditional statement
#include<stdio.h>
int main(){
    int value1, value2;
    char operation ;
    printf("Enter the first value :"); 
    scanf("%d", &value1);
    printf("Enter the first value :"); 
    scanf("%d", &value2);
    printf("Enter the operation (+, -, *, /, %%,)");
    scanf(" %c", &operation);

    switch (operation)
    {
    case '+':
        printf("Addition : %d",value1 + value2);
        break;
    case '-':
        printf("Subtraction : %d",value1 - value2);
        break;
    case '/':
        printf("division : %d",value1 / value2);
        break;
    case '*':
        printf("Multiplication : %d",value1 * value2);
        break;
    case '%':
        printf("Modulo : %d",value1 % value2);
        break;
    
    default:
        break;
    }
    return 0;
}