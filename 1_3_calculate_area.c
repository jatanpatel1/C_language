// 3. WAP to Find Area And Circumference of Circle
#include<stdio.h>

int main(){
    float pi = 3.14;
    int radius;
    
    printf("Find Enter radius value = ");
    scanf("%d", &radius);
    
//    circumference of circle
	float Ans2 = 2 * pi * radius;
	printf("Area of circumference = %.2f\n", Ans2);

    return 0;
}
