// 25.Accept 5 expense from user and find average of expense
#include<stdio.h>
int main() {
    char expense[10];
    int i , j , c = 0;

    for ( i = 0; i < 5; i++)
    {
        printf("\n Enter your %d:expense - ", i+1);
        scanf("%d", &expense[i]);

    }


for ( j = 0; j < 5; j++)
{
    c = c + expense[j];
}

float ans = c / 5;
printf("\n\n Average salary : %.2f",ans);

    return 0;
}
