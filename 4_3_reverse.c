// 3. WAP to find reverse of string using recursion

#include<stdio.h>
#include<string.h>

void string(char *val, int st, int en);

main() {
    char val[100];
    int len;
    printf("Enter the any name : ");
    scanf("%s", &val);
    len = strlen(val);
    string(val, 0, len - 1);
    printf("%s", val);
}

void string(char *val, int st, int en) {
    if (st >= en) {
        return;
    }
    char temp = val[st];
    val[st] = val[en];
    val[en] = temp;
    string(val, st + 1, en - 1);
}