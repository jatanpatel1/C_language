// 20.Accept monthly salary from the user and deduct 10% insurance premium,
// 10% loan installment find out of remaining salary.
#include<stdio.h>
int main() {
	int salary;
	float in_pre, after_pre, loan_ins, pre, final;
	printf("Enter your monthly salary :");
	scanf("%d", &salary);

	in_pre = 0.10 * salary;
	printf("\n Insurance premium: %.2f", in_pre);


	loan_ins = 0.10 * salary;
	pre = salary - loan_ins;
	printf("\n Remaining salary after loan insurance: %.2f", pre);

	final = pre - in_pre;
	printf("\n final remaining salary: %.2f",final);

}

