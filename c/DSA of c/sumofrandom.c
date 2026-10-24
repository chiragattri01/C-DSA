#include<stdio.h>
int main(){
    int sum=0;
    int n;
    char name[50];
    int roll_no;
    printf("enter your roll_no");
    scanf("%d",&roll_no);
    printf("enter your name:");
    scanf("%s",name);

    printf("enter array size");
    scanf("%d",&n);
    int arr[n];
    printf("enter the array elements:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);

    }
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    printf("sum is=%d\n",sum);
    printf("your name is=%s\n",name);
    printf("your roll_no is=%d",roll_no);
    return 0;

}