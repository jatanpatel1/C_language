// 10.Write a program in C to extract a substring from a given string

#include<stdio.h>
int main() {
    char position, str[100];
    int num, j;
    printf("Enter the any string : ");
    gets(str);

    printf("Give the position from which word to form the substring : ");
    scanf("%c", &position);

    printf("How many letters in substring , Enter number :");
    scanf("%d", &num);



    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == position)
        {
            if (strlen(str) >= num)
            {
                for (int p = 0;p < num; p++)
                {
                    printf("%c", str[i]);
                    i++;
                }
            }
            else {
                j = 1;
            }
        }
        j = 1;
    }

    if (j)
    {
        printf("Enter valid details..");
    }


    return 0;
}