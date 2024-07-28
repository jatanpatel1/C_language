//15. Calculate sum of 10 numbers using of while loop

#include<stdio.h>
int main(){
    int i=10,j=1,value,ans=0;
    while (i > 0)
    {
        printf("Enter the %d number : ",j);
        scanf("%d", &value);
        ans += value;
        j++;
        i--;
    }

    printf("sum of ten numbers = %d",ans);
    
    return 0;
}