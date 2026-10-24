#include<stdio.h>
int main(){
    int price1,price2,price3,min;
    printf("enter the price of 1 smartphone");
    scanf("%d",&price1);
    printf("enter the price of 2 smartphone");
    scanf("%d",&price2);
    printf("enter the priced of 3 smartphone");
    scanf("%d",&price3);
    price1=min;
    if(price2<min)
    min=price2;
    if(price3<min)
    min=price3;
    printf("the best deal in smatphone is $%d",min);
    return 0;
}