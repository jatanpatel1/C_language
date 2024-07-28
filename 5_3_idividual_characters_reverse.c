// 3. Write a program in C to print individual characters of a string in reverse order

#include<stdio.h>
int main() {
    char str[50] = "bhambhana divyesh";
    int len = strlen(str);
    for (int i = len; i >= 0; i--)
    {
        printf("%c\n", str[i]);

    }

    return 0;
}
