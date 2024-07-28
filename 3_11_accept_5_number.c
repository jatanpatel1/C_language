// 11. Accept 5 names from user at run time.
#include<stdio.h>
int main(){
    char a[50];
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("Enter the %d number : ",i + 1);
        scanf("%s", &a);
    }
    
    return 0;
}