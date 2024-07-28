// 14.WAP to find the largest of three numbers.
#include<stdio.h>
main() {
    int a1 = 333, a2 = 43, a3 = 5345,n, ans;
    if (a1 > a2)
    {
        n = a1;
    }else{
        n = a2;
    }

    if (n > a3)
    {
        ans = n;
    }else{
        ans = a3;
    }

    printf("large num : %d", ans);
    
    
}