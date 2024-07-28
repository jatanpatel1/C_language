// 12.Accept number of students from user. I need to give 5 apples to each
// student. How many apples are required?
#include<stdio.h>
int main() {
	int a;
	printf("Enter the number of students : ");
	scanf("%d", &a);

	printf("Required apple for all student = %d",a *5);
	return 0;
}

