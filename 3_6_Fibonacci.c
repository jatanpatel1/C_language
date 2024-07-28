//6. WAP to print Fibonacci series up to given numbers

#include<stdio.h>
int main(){
    int a =0 ,i,b = 1 ,c,value;
    printf("Enter value for fibonacci : ");
    scanf("%d", &value);

for (i = 1; i <= value; i++)
{
    c = a + b;
    a = b;
    b = c;
    printf("%d\n",c);
}

    
    return 0;
}