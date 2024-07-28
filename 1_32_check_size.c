// 32. Accept 2 numbers and find out its sum check it size
#include<stdio.h>
int main(){
    int a, b, c;
    printf("Enter the first value : ");
    scanf("%d", &a);
    
    printf("Enter the second value : ");
    scanf("%d", &b);

    c = a + b;
    int size = sizeof(int);
    printf("%d",size);
    return 0;
}