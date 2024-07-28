/* Write a C program to input basic salary of an employee and calculate its
Gross salary according to following:
Basic Salary <= 10000 : HRA = 20%, DA = 80%
Basic Salary <= 20000 : HRA = 25%, DA = 90%
Basic Salary > 20000 : HRA = 30%, DA = 95% */

#include<stdio.h>
int main(){
    int salary;
    float hra , da , Gsalary;
    printf("Enter your basic salary : ");
    scanf("%d", &salary);

    if (salary <= 10000)
    {
        hra = salary * 0.20;
        da = salary * 0.80;
    }else if (salary <= 20000)
    {
        hra = salary * 0.25;
        da = salary * 0.90;
    }else{
        hra = salary * 0.30;
        da = salary * 0.95;
    }

    Gsalary = salary + hra + da;
    printf("Gross salary : %.2f",Gsalary);
    
    return 0;
}