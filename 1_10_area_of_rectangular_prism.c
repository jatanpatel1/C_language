// 10.find the area of a rectangular prism formula : A=2(wl+hl+hw)
#include<stdio.h>
int main(){
	
	int width, height , length;
	printf("Enter the value of width: ");
    scanf("%d", &width);
    printf("Enter the value of height: ");
    scanf("%d", &height);
    printf("Enter the value of length: ");
    scanf("%d", &length);
    
    printf(" circumference of Triangle = %d",2*(width*length+height*length+height*width));
    return 0;
}

