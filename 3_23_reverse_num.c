//23. C Program to Reverse a Number Using FOR Loop
#include<stdio.h>
int main(){
    int i,value,ans =0, a = 15852456;
    for (i = a; i > 0; i/=10)
    {
        value = i % 10;
        ans = ans * 10 + value;
    }
    printf("%d",ans);
    
    return 0;
}