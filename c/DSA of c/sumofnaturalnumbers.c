#include<stdio.h>
int main(){
    int n;
    int sum=0;
    printf("enter a positive number");
    scanf("%d",&n);
for(int i=0;i<=n;i++){
   sum+=i;
}
 printf("sum of first %d number  is: %d",n,sum);
return 0;
    
}