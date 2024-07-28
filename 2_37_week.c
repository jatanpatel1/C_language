// 37. i. Monday to Sunday using switch case

#include<stdio.h>
int main(){
    int i;
    for (i = 7; i >= 1; i--)
    {
        switch (i)
        {
        case 7:
            printf("Sunday\n");
            break;
        case 6:
            printf("Monday\n");
            break;
        case 5:
            printf("Tuesday\n");
            break;
        case 4:
            printf("wednesday\n");
            break;
        case 3:
            printf("thursday\n");
            break;
        case 2:
            printf("Friday\n");
            break;
        
        default:printf("Saturday\n");
            break;
        }
    }
    
    return 0;
}