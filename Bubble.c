#include <stdio.h>

void BubbleSort(int size, int arr[]){

    for(int i = 0; i < size - 1; i++){

        int exchs = 0;

        for(int j = 0; j < size - i - 1; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
                exchs = 1;
            }
        }

        if(exchs == 0){
            break;
        }
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

    BubbleSort(size,arr);

    printf("Sorted Array : ");
    for(int i = 0; i < size; i++){
        printf("%d", arr[i]);
    }

    return 0;
}