// 22. Calculate compound interest (Compound Interest formula:
// a. Formula to calculate compound interest annually is given by:
// Amount= P(1 + R/100)t
//  b. Compound Interest = Amount – P


#include<stdio.h>
int main() {
    int investet_RS, rate, year, i;
    float a,b,ans,total_ammount;
    printf("How much money to invest :");
    scanf("%d", &investet_RS);

    printf("Enter interest rate:");
    scanf("%d", &rate);

    printf("How many year investing : ");
    scanf("%d", &year);

    a = 1 + (rate/100.00);
    b = 1;
    for ( i = 1; i <= year; i++)
    {
        b = b * a;
    }
    ans = investet_RS * b;
    
    total_ammount = ans - investet_RS;
    printf("Total compound interest : %.2f",total_ammount);

        return 0;
}

