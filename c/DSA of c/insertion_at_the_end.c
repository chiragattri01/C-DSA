#include <stdio.h>

int main() {
    
    int arr[10] = {2, 0, 7, 6, 0}; 
    int n = 5; 
    int new_element = 9;


    arr[n] = new_element;

    // 2. Increment the size of the array
    n = n + 1;

    // 3. Print the updated array
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}