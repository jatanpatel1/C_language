// 11.Write a program in C to read a sentence and replace lowercase characters with
// uppercase and vice versa.

#include<stdio.h>
int main(){
    char sentence[200];
    printf("Enter the sentence : ");
    gets(sentence);


    printf("Your sentence : %s \n",sentence);
    printf("Change sentence : ");
    for (int i = 0; sentence[i] != '\0'; i++)
    {
    if ((int)sentence[i] >= 97 && (int)sentence[i] <= 122)
    {
        printf("%c",toupper(sentence[i]));
    }else if ((int)sentence[i] >= 65 && (int)sentence[i] <= 90)
    {
        printf("%c",tolower(sentence[i]));
    }else{
        printf("%c",sentence[i]);
    }
    }
    

    return 0;
}