#include <stdio.h>
#include <stdbool.h>

int main() {
    int size;
    printf("Enter size of Array: ");
    scanf("%d", &size);

    int array[size];
    printf("Enter elements: ");
    for(int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    int key;
    bool found = false;
    
    printf("Enter the element you want to search: ");
    scanf("%d", &key);

    for(int j = 0; j < size; j++) {
        if(array[j] == key) {
            printf("Element found at index : %d", j);
            found = true;
            break;
        }
    }
    if(!found) {
        printf("Element not found in the array.\n");
    }
    return 0;
}