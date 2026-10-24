#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int search = 50; 
    int found = 0;
    
    
    for(int i = 0; i < 5; i++) {
        if(arr[i] == search) {
            printf("Element found at position: %d\n", i + 1);
            found = 1;
            break; // Stop searching once found
        }
    }
    

    if(found == 0) {
        printf("Element not found\n");
    }
    
    return 0;
}