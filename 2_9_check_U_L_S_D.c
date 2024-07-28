// 9. C Program to Check Uppercase or Lowercase or Digit or Special
// Character
#include<stdio.h>
int main(){
    char a;
    printf("Enter value : ");
    scanf("%c", &a);

    if (a >= 'A' && a <= 'Z')
    {
        printf("Your value uppercase");
    }else if (a >= 'a' && a <= 'z')
    {
        printf("Your value lowercase");
    }else if (a >= '0' && a <= '9')
    {
        printf("Your value digit");
    }else{
        printf("Your value is special character");
    }
    
    return 0;
}