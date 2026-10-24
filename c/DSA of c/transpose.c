#include <stdio.h>

int main() {
    int a[2][3], transpose[3][2];
    
    // Input matrix elements
    printf("enter matrix:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) { 
            scanf("%d", &a[i][j]);
        }
    }
    
    // Calculate Transpose
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) { 
            transpose[j][i] = a[i][j]; 
        }
    }
    
    // Print Transpose Matrix
    printf("Transpose:\n");
    for (int i = 0; i < 3; i++) { 
        for (int j = 0; j < 2; j++) { 
            printf("%d ", transpose[i][j]); 
        }
        printf("\n");
    }
    
    return 0;
}