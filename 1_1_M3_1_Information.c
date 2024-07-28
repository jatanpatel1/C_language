// 1. DisplayThis Information using printf
// a. Your Name
// b. Your Birth date
// c. Your Age
// d. Your Address

#include<stdio.h>
int main(){
	char name[10] = "divyesh";
	char birth_date[15] = "29/04/2004";
	int age= 19;
	char address[50]= "kerala(gir),junagadh,gujarat.";

	printf("name:- %s\n", name);
	printf("birth_date:- %s\n", birth_date);
	printf("age:- %d\n", age);
	printf("address:- %s\n", address);
    return 0;
}
