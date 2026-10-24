#include<stdio.h>
int fibonacci(int n){
    if(n<=1 ) return n;
    return fibonacci(n-1)+fibonacci(n-2);
}



int main(){
    int n;
    printf("enter no of terms:");
    scanf("%d",&n);
    printf("fibonacci is=%d\n",fibonacci(n));
    printf("chirag\n");
    printf("roll_no=41");
    return 0;
}