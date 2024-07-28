// 26.Convert temperature Fahrenheit to Celsius
#include<stdio.h>
int main(){
    int f , a, c;
    printf("Enter Fahrenheit temperature : ");
    scanf("%d", &f);
    char deg = 248;

    a = f - 32;
    c = a * 5/9;

    printf("%d%cC",c,deg);
    
    return 0;
}
