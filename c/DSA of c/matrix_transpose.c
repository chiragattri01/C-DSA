// #include<stdio.h>
// int main(){
//     int r,c;
//     int a[10][10],t[10][10];
//     printf("enter  no of rows and columns:");
//     scanf("%d",&r,&c);
//     printf("enter rows and column element:");
//     for(int i=0;i<r;i++){
//         for(int j=0;j<c;j++){
//             scanf("%d",&a[i][j]);
//         }

//     }
//     for(int i=0;i<r;i++){
//         for(int j=0;j<c;j++){
//             t[j][i]=a[i][j];
//         }
//     }
//     printf("\n transpose matrix:");
//     for(int i=0;i<r;i++){
//         for(int j=0;j<c;j++){
//             printf("%d",t[j][i]);
//         }
//         printf("\n");
//     }
//     return 0;


// }
#include <stdio.h>

int main()
{
    int A[10][10], T[10][10];
    int rows, cols, i, j;

    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter Matrix:\n");

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    // Transpose
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            T[j][i] = A[i][j];
        }
    }

    printf("Transpose Matrix:\n");

    for(i = 0; i < cols; i++)
    {
        for(j = 0; j < rows; j++)
        {
            printf("%d ", T[i][j]);
        }
        printf("\n");
    }

    return 0;
}