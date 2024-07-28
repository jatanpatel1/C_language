// 6. Write a program in C to count the total number of alphabets, digits and special
// characters in a string.

#include<stdio.h>
int main() {
    char str[] = "DVs @#234";
    int alph = 0, digi = 0, spe = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if ((int)str[i] >= 65 && (int)str[i] <= 90 || (int)str[i] >= 97 && (int)str[i] <= 122)
        {
            alph++;
        }
        else if ((int)str[i] >= 48 && (int)str[i] <= 57) {
            digi++;
        }
        else if ((int)str[i] != 32) {
            spe++;
        }

    }
    printf("Alphabets : %d\n", alph);
    printf("Digits : %d\n", digi);
    printf("Spacial characters : %d\n", spe);

    return 0;
}