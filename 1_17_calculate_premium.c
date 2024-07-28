// 17. Calculate person’s insurance premium based on salary
#include<stdio.h>
int main(){
	int salary;
    printf("Enter your salary : ");
    scanf("%d",&salary);

    if (salary<20000)
    {
        printf("your insurance premium = %.2f",salary*0.05);
    }else if (salary<50000)
    {
        printf("your insurance premium = %.2f",salary*0.10);
    }else if(salary<80000){
        printf("your insurance premium = %.2f",salary*0.15);
    }else{
        printf("your insurance premium = %.2f",salary*0.20);
    }
    
    return 0;
}

