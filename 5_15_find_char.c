// 15. Write a program in C to find the largest and smallest words in a string

#include<stdio.h>
int main() {
    char str[] = "dizvyesh";
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
    printf("smallest words :  %c \n", (char)asc);
   
    for (int i = 1;str[i] != '\0'; i++)
    {
        if (j) {
            asc = (int)str[0];
            j = 0;
        }

        if (asc < (int)str[i])
        {
            asc = (int)str[i];
        }

    }
    printf("largest words :  %c", (char)asc);
    return 0;
}