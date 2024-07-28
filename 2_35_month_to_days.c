/*35. Accept the input month number and print number of days in that
month. */
#include<stdio.h>
int main(){
    int month;
    printf("Enter month in number(1 To 12) : ");
    scanf("%d", &month);

    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
    {
        printf("Days : 31");
    }else if (month == 2)
    {
        printf("Days : 28");
    }else if (month == 4 || month == 6 || month == 9 || month == 11)
    {
        printf("Days : 30");
    }else{
        printf("Enter valid month!");
    }
    
    return 0;
}