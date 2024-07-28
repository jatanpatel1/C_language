// 8. WAP to reverse a string and check that the string is palindrome or not
// run on c online compailer
#include<stdio.h>
#include<string.h>

main(){
    char str[200],restr[200];
    int p = 1 ,i,j,a;
    printf("Enter any string : ");

    scanf("%s", &str);

    int len = strlen(str);

    for (i = (len -1),j=0; i >= 0 ; i-- ,j++)
    {
        restr[j] += str[i];
    }
    for (a = 0; a < len; a++){
        if(restr[a] != str[a]){
            p = 0;
            break;
        }
    }
    if(p == 1){
        printf("palidrome");
    }else{
        printf("not palidrome");
    }
}
