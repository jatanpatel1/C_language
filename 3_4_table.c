//4. WAP to print table up to given numbers
#include<stdio.h>
int main(){
    int value,i;
printf("which table give you Enter value : ");
scanf("%d", &value);

for (i = 1; i <= 10; i++)
{
    printf("%d x %d =  %d\n",value,i,value * i);
}

    return 0;
}