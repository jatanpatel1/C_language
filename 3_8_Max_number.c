//8. Write a program to find out the max from given number (E.g., No: -1562
// Max number is 6)

#include<stdio.h>
int main(){
    char value[50],j = 0 ; 
    int i ,  length=0;
    printf("Enter value : ");
    scanf("%s", &value);

    for (i = 0;value[i]  != '\0'; i++)
    {
        length++;
    }

    for (i = 0; i <= length; i++)
    {
        if (j <= value[i])
        {
            j = value[i];
        }
        
    }
    printf(" %c",j);
    
    return 0;
}