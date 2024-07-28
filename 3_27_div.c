// 27. 1/2 - 2/3 + 3/4 - 4/5 + 5/6 ..........n

#include<stdio.h>

int main() {
    int i,j, val ;
    float ans ,ans2 = 0;
    printf("Enter the value : ");
    scanf("%d", &val);
    for (i = 1, j = 2; i <= val; i++, j++)
    {
        ans =0;
        if (i%2 == 0)
        {
            ans = (float)i / j;
            ans2 -= ans;
        }
        else 
        {
            ans = (float)i / j;
            ans2 += ans;
        }

    }
printf("%f",ans2);
    return 0;
}