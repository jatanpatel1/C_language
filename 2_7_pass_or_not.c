// 7. Accept marks from user and check pass or fail
#include<stdio.h>
int main(){
    int marks;
    printf("Enter the your marks : ");
    scanf("%d", &marks);

if (marks >= 33 && marks <= 100 )
{
    printf("Pass");
}else{
    printf("passing marks : 33");
    printf("\nFail");
}

    return 0;
}