//37. Vowel or Consonant using switch case

#include<stdio.h>
int main(){
    char n;
    printf("Enter any latter : ");
    scanf("%c", &n);
    
    switch (n)
    {
    case 'a' :
    case 'e' :
    case 'i' :
    case 'o' :
    case 'u' :
    case 'A' :
    case 'E' :
    case 'I' :
    case 'O' :
    case 'U' :
        printf("Vowel");
        break;
    
    default: printf("consonant");
        break;
    }
    return 0;
}