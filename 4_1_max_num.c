// 1. Write a program to find out the max number from given array using function

#include<stdio.h>
int main(){
    int i,a = 0, arr[]={10,20,40,40,50};
    int len = sizeof(arr) / sizeof(arr[0]);
    for (i = 0; i < len ; i++)
    {
        if (arr[i]>a)
        {
            a = arr[i];
        }
        
    }
    printf("%d",a);
    

    return 0;
}