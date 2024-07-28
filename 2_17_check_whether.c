// 17.Write a C program to check whether a triangle can be formed with the given
// values for the angles
#include<stdio.h>
int main(){
    int side1, side2,side3,sideT;
    printf("Enter the side one value : ");
    scanf("%d", &side1);

    printf("Enter the side two value : ");
    scanf("%d", &side2);
    
    printf("Enter the side three value : ");
    scanf("%d", &side3);

    sideT = side1 + side2 + side3;

    if (sideT == 180)
    {
        printf("Triangle");
    }else{
        printf("Not Triangle");
    }
    

    // if (side1 == side2 && side2 == side3 && side3 == side1)
    // {
    //     printf("This is Equilateral triangle");
    // }else if (side1 != side2 && side2 != side3 && side3 != side1)
    // {
    //     printf("This is Scalene triangle");
    // }else{
    //     printf("This is Isosceles triangle");
    // } 

    return 0;
}