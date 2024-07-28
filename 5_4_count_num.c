// 4. Write a program in C to count the total number of words in a string.

#include<stdio.h>
int main(){
    char str[50] = "dvs 1329";
    int num =1;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ' && str[i + 1] != '\0')
        {
            num++;
        }
        
    }
    printf("Total number in string : %d",num);
    return 0;
}