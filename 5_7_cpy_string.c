// 7. Write a program in C to copy one string to another string.

#include<stdio.h>
int main(){
    char str1[50] = "divyesh" , str2[50] ;
    int i = 0;
    while (str1[i] != '\0')
    {
        str2[i] = str1[i];
        i++;
    }
    printf("%s",str2);
    return 0;
}