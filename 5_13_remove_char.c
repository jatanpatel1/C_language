// 13.Write a program in C to remove characters from a string except alphabets.

#include<stdio.h>
main(){
    char value[100];
    printf("Enter any string : ");
    scanf("%s", &value);

    for (int i = 0; value[i] != '\0'; i++)
    {
       if ((int)value[i] >= 65 && (int)value[i] <= 90 || (int)value[i] >= 97 && (int)value[i] <= 122)
       {
        printf("%c",value[i]);
       }
       
    }
    
}