// 5. Check Number Is Positive or Negative

#include<stdio.h>
int main(){
    int num;
    printf("Enter any number : ");
    scanf("%d", &num);

    if (num > 0)
    {
       printf("Your number %d is positive",num);
    }else if (num < 0)
    {
        printf("Your number %d is negative",num);
    }else{
        printf("Number not required");
    }
    
    return 0;
}