// 8. Write a program in C to count the total number of vowels or consonants in a
// string.

#include<stdio.h>
int main(){
    char str[] = "abcdefghijklmnopqrstuvqxyz";
    int vowels = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a' || str[i] == 'A' || str[i] == 'e' ||str[i] == 'E' ||str[i] == 'i' ||str[i] == 'I' ||str[i] == 'o' ||str[i] == 'O' ||str[i] == 'u' ||str[i] == 'U')
        {
         vowels++;
        }
        
    }
    printf("%d",vowels);
    return 0;
}