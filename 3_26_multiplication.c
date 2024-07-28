// 26. (1)+ (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n)

#include<stdio.h>
int main(){
    int i,val,j,ans=0,ans2=0;
    printf("Enter the value : ");
    scanf("%d", &val);
    for (i = 1; i <= val; i++)
    {
        ans = 0;
       for (j=1; j <= i; j++)
       {
        ans += j;
       }
        ans2 += ans;
       
    }
    printf("%d\n",ans2);
    return 0;
}