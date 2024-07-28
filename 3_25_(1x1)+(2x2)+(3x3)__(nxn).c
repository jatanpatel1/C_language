//25. (1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n)

#include<stdio.h>
int main(){
    int val,i,ans,ans2;
    printf("Enter value : ");
    scanf("%d", &val);
    for (i = 1; i <= val; i++)
    {
        ans = i * i;
        ans2 += ans;
    }
    printf("%d\n",ans2);
    
    return 0;
}