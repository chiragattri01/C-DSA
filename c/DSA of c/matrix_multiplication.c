#include<stdio.h>
int main() {
    // Declaring 2x2 matrices and initializing the result matrix c to 0
    int a[2][2], b[2][2], c[2][2] = {0};
    
    // Taking input for the first matrix
    printf("Enter First Matrix:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    
    // Taking input for the second matrix
    printf("Enter Second Matrix:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &b[i][j]);
        }
    }
    
    // Matrix Multiplication logic using a 3rd nested loop
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    
    // Printing the result matrix
    printf("Result:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}