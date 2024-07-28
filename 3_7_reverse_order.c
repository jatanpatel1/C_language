//7. WAP to print number in reverse order e.g.: number = 64728 ---> reverse =
// 82746

#include<stdio.h>
int main() {
    int i, length = 0, j;
    char num[50] = "82746";
    for (i = 0; num[i] != '\0'; i++)
    {
        length++;
    }
    for (i = length; i >= 0;i--)
    {
        printf(" %c", num[i]);
    }

    return 0;
}