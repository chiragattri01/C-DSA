#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50, 60, 70};
    int search;
    int low = 0;
    int high = 6;
    int mid;
    int found = 0;

    printf("Enter Element to Search: ");
    scanf("%d", &search);

    while (low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] == search) {
            printf("Element found at position %d\n", mid + 1);
            found = 1;
            break;
        } 
        else if (search < arr[mid]) {
            high = mid - 1;
        } 
        else {
            low = mid + 1;
        }
    }

    if (found == 0) {
        printf("Element Not found\n");
    }

    return 0;
}