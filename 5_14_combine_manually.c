// 14.Write a program in C to combine two strings manually

#include<stdio.h>
int main(){
    char first[50] , second[50];
    printf("Enter first string : ");
    gets(first);
    
    printf("Enter second string : ");
    gets(second);

    printf("combine string .... %s%s",first,second);
    return 0;
}