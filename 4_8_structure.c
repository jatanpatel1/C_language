// Write a program of structure employee that provides the following
// a. information -print and display empno, empname, address
// andage
// b. Write a program of structure for five employee that
// provides the following information -print and display
// empno, empname, address andage

#include<stdio.h>
struct employe
{
   int empno;
   char empname[50];
   char address[100];
   int age;
};

main(){
    struct employe emp[5];
int i;
    for ( i = 0; i < 5; i++)
    {
         printf("Enter details for employee %d:\n", i + 1);
        printf("Employee ID: ");
        scanf("%d", &emp[i].empno);
        printf("Employee Name: ");
        scanf(" %[^\n]", emp[i].empname);  
        printf("Address: ");
        scanf(" %[^\n]", emp[i].address); 
        printf("Age: ");
        scanf("%d", &emp[i].age);
        printf("\n");
    }
    
    printf("\nEmployee Information:\n");
    for (i = 0; i < 5; i++) {
        printf("Employee %d:\n", i + 1);
        printf("ID: %d\n", emp[i].empno);
        printf("Name: %s\n", emp[i].empname);
        printf("Address: %s\n", emp[i].address);
        printf("Age: %d\n\n", emp[i].age);
    }
}