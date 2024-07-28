// 5. Write a program in C to compare two strings without using string library
// functions.

#include<stdio.h>
int main(){
char str1[] = "heloo 123", str2[] = "heloo 123";
int ans;

   for (int i = 0;str1[i] != '\0'; i++)
    {
        if (str1[i] == str2[i])
        {
            ans = 1;
        }else{
            ans = 0;
        }
        
    }

if(ans == 1){
    printf("Your string is same");
}else{
    printf("\nYour string is not same!\n");
}
    
    
    return 0;
}