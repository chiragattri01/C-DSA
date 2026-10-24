#include<stdio.h>
int main(){
    int arr[]={2,5,1,3,6};
    int n=5;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp; 
            }
        }
        printf("pass %d:",i+1);
        for (int j=0;j<n;j++){
            printf("%d  ",arr[j]);
        }
        printf("\n");
  
    }

    
  
    // for( int j=0;j<n;j++){
    //  printf("%d  ",arr[j]);
    // }
    return 0;
}