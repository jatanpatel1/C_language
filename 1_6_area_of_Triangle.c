// 6. Find area of Triangle Formula : A = 1/2 × b × h
#include <stdio.h>

int main() {
    float base, height;

    printf("Enter the base of the triangle: ");
    scanf("%f", &base);
    printf("Enter the height of the triangle: ");
    scanf("%f", &height);

    printf("The area of the triangle is: %.2f\n", 0.5 * base * height);

    return 0;
}


