#include <stdio.h>

void SelectionSort(int size, int arr[]){

    for(int i = 0; i < size - 1; i++){
        int min_idx = i;
        for(int j = i + 1; j < size; j++){
            if(arr[j] <arr[min_idx]){
                min_idx = j;
            }
        }

        if(min_idx != i){
            int temp = arr[min_idx];
            arr[min_idx] = arr[i];
            arr[i] = temp;
        }
    }
}
int main(){

    int size;
    printf("Enter size of the array :");
    scanf("%d",&size);

    int arr[size];
    printf("Enter elements of the Array : ");
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }

    printf("Unsorted Array :");
    for(int i = 0; i < size; i++){
        printf("%d", arr[i]);
    }

    printf("\n");

    SelectionSort(size,arr);

    printf("Sorted Array : ");
    for(int i = 0; i < size; i++){
        printf("%d", arr[i]);
    }

    return 0;
}