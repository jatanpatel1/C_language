// 33. C Program to Read Integer and Print First Three Powers (N^1, N^2, N^3)
#include<stdio.h>
int main(){
    int num1, ans1 , ans2,ans3;
    printf("Enter the number 1 : ");
    scanf("%d", &num1);


    ans1 = num1;
    ans2 = num1 * num1;
    ans3 = num1 * num1 * num1;
    printf("N*1 : %d\n", ans1);
    printf("N*2 : %d\n", ans2);
    printf("N*3 : %d\n", ans3);
    return 0;
}
