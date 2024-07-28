// 31. Convert kilometers into meters
#include<stdio.h>
int main(){
    int kilo , mete;
    printf("Enter kilometer : ");
    scanf("%d", &kilo);

    mete = kilo * 1000;
    printf("meters = %d",mete);
    return 0;
}
