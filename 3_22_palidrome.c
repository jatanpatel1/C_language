//22. Accept 3 numbers from user using while loop and check each numbers
// palindrome

#include<stdio.h>
main() {
    int i, num, value, ans = 0, count = 3;
    while (count > 0)
    {
        printf("Enter value : ");
        scanf("%d", &num);

        i = num;
        while (i > 0)
        {
            value = i % 10;
            ans = ans * 10 + value;
            i /= 10;
        }
        printf("%d\n",ans);
        if (num == ans)
        {
            printf("Your number is 'palidrome' \n");
            ans = 0;
        }else{
            printf("Your number is not 'palidrome' \n");
            ans = 0;
        }
        count--;

    }

}