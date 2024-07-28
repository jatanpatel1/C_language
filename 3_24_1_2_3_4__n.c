// 24. 1 + 2 + 3 + 4 + 5 + ... + n

#include<stdio.h>
int main(){
    int n,ans = 0,i;
    printf("Enter the value n : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        ans += i;
    }
        printf("1+2+3+4....n = %d",ans);
    
    return 0;
}