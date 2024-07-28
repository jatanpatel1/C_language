//14. Accept 5 numbers from user and find those numbers factorials

#include<stdio.h>
int main() {
    int value, i, ans = 1;
    for (i = 1; i <= 5; i++)
    {
        printf("Enter youe %d value : ", i);
        scanf("%d", &value);
        ans *= value;
    }
printf("your number factorial is %d",ans);
    return 0;
}