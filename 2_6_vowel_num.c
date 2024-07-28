// 6. Find the Character Is Vowel or Not

#include<stdio.h>
int main() {
    char num;
    printf("Enter any character : ");
    scanf("%c", &num);

    switch (num)
    {
    case 'a':
    case 'A':
        printf("Your character '%c' is vowel", num);
        break;

    case 'e':
    case 'E':
        printf("Your character '%c' is vowel", num);
        break;

    case 'i':
    case 'I':
        printf("Your character '%c' is vowel", num);
        break;

    case 'o':
    case 'O':
        printf("Your character '%c' is vowel", num);
        break;

    case 'u':
    case 'U':
        printf("Your character '%c' is vowel", num);
        break;

    default:
        printf("Your character '%c' is NOT vowel");
        break;
    }
    return 0;
}