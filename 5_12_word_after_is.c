// Write a program in C to find the number of times a given word 'is' appears in
// the given string.

#include<stdio.h>
int main(){
    char sentence[200];
    int count = 0, word = 0;
    printf("Enter any sentence : ");
    gets(sentence);

    for (int i = 0;sentence[i]!='\0' ; i++)
    {
        if ((int)sentence[i] == 105 && (int)sentence[i + 1] == 115)
        {
            count = 1;
        }

        if (count == 1 && sentence[i] == ' ')
        {
            word++;
        }
        
        
    }
    printf("%d",word);
    return 0;
}