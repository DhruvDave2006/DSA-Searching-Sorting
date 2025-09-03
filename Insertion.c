#include <stdio.h>

void InsertionSort(int size, int arr[]){

    for(int i = 1; i < size; i++){
        int key = arr[i];
        int j = i - 1;

        while(j >= 0 && arr[j] > key){
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main(){

    int size;
    printf("Enter size of an Array : ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter elements of an Array : ");
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }

    printf("Unsorted Array : ");
    for(int i = 0; i < size; i++){
        printf("%d", arr[i]);
    }
    printf("\n");

    InsertionSort(size,arr);

    printf("Sorted Array : ");
    for(int i = 0; i < size; i++){
        printf("%d", arr[i]);
    }

    return 0;
}