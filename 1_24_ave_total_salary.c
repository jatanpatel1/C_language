// 24.Accept 5 employees name and salary and count average and total salary
#include<stdio.h>
int main() {
    char name[10];
    int salary[10] , i , j , c = 0;

    for ( i = 0; i < 5; i++)
    {
        printf("\n employee %d : Enter your name - ", i+1);
        scanf("%s", &name[i]);

        printf(" employee %d : Enter your salary - ", i+1);
        scanf("%d", &salary[i]);
    }

for ( j = 0; j < 5; j++)
{
    c = c + salary[j];
}

float ans = c / 5 ;
printf("\n\n Average salary : %.2f",ans);
printf("\n\n Total salary : %d",salary);

    return 0;
}
