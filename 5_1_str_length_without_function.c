// 1. Write a program in C to find the length of a string without using library
// functions.

#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    int i, len = 0;
    printf("Enter any string : ");
    gets(str);
    for (i = 0; str[i] != '\0'; i++)
    {
        len++;
    }
    printf("length = %d",len);
    return 0;
}