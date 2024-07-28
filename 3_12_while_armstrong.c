//12. Program of Armstrong Number in C Using while loop

#include<stdio.h>
int main() {
    int value, ans1, Fans = 0, ans2;
    printf("Enter the value : ");
    scanf("%d", &value);

int i = value;
    while (i > 0)
    {
        ans1 = i % 10;
        ans2 = ans1 * ans1 * ans1;
        Fans += ans2;
        i /= 10;
    }

    if (value == Fans)
    {
        printf("This value is armstrong number");
    }
    else {
        printf("This value is not armstrong number");
    }

    return 0;
}
