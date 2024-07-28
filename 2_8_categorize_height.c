// 8. WAP to accept the height of a person in centimeters and categorize the
// person according to their height.
#include<stdio.h>
int main(){
    float hi ; 
    printf("Enter your height in centimeters : ");
     scanf("%f", &hi);

     if (hi >= 160 && hi < 170)
     {
        printf("Short height");
     }else if (hi >= 170 && hi <= 180)
     {
        printf("Average height");
     }else if (hi >= 180 && hi <= 190)
     {
        printf("Tall height");
     }else{
        printf("Height not required");
     }
     
    return 0;
}