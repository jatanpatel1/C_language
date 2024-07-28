// 10.WAP to check whether a number is negative, positive or zero.

#include<stdio.h>
int main(){
    int num= 30;

    if (num > 0)
    {
       printf("Your number %d is positive",num);
    }else if (num < 0)
    {
        printf("Your number %d is negative",num);
    }else if (num == 0 )
    {
        printf("Your number is zero",num);
    }
    else{
        printf("Number not required");
    }
    
    return 0;
}