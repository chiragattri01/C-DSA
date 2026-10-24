#include<stdio.h>
int main(){
    int number1, number2;
    printf("enter two numbers");
    scanf("%d %d",&number1,&number2);
    int sum;
    sum=number1+number2;
    printf("the sum of %d and %d is %d:",number1,number2,sum);
    return 0;
}