// 9. Write a program in C to find the maximum number of characters in a string.

#include<stdio.h>
int main() {
    char str[] = "divyesh";
    int asc = 0;
    int j = 1;

    for (int i = 1;str[i] != '\0'; i++)
    {
        if (j) {
            asc = (int)str[0];
            j = 0;
        }

        if (!(asc < (int)str[i]))
        {
            asc = (int)str[i];
        }

    }
    printf(" %c", (char)asc);
    return 0;
}