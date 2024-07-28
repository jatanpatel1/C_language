// 2. Write a program to make Simple calculator (to make addition, subtraction,
// multiplication, division and modulo)

#include<stdio.h>
int main(){
	int a , b;
	printf("Enter value of a\n");
	scanf("%d", &a);
	printf("Enter value of b\n");
	scanf("%d", &b);
	printf("The addition of a and b = %d\n", a + b);
	printf("The subtraction of a and b = %d\n", a - b);
	printf("The division of a and b = %d\n", a / b);
	printf("The multiplication of a and b = %d\n", a * b);
	printf("The modulo of a and b = %d", a % b);
    return 0;
}
