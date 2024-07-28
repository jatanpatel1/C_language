//12. Program of Armstrong Number in C Using For Loop
#include<stdio.h>
int main(){
    int value,i,val1,j,ans1 = 1,Fans=0;
    printf("Enter the value : ");
    scanf("%d", &value);

    for (i = value; i > 0; i /= 10)
    {
        val1 = i % 10;
        for(j = value;j > 0;j /= 10)
        {
        	 ans1 *= val1 ;
		}
        Fans += ans1;
        ans1 = 1;
    }
    
    if (value == Fans)
    {
        printf("Your number %d is Armstrong number!",value);
    }else{
        printf("Your number %d is not Armstrong number.",value);
    }
    
    

   
    
    return 0;
}
