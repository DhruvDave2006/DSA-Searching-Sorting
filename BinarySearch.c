#include <stdio.h>

int BinarySearch(int size, int arr[], int key){

    int left = 0;
    int right = size - 1;

    while(left <= right){

        int mid = (left + right) / 2;

        if(arr[mid] == key){
            return mid;
        }

        else if(arr[mid] < key){
            left = mid + 1;
        }
        else{
            right = mid - 1;
        }
    }
    return -1;
}

int main(){
    int size;
    printf("Enter size of an Array : ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter elements of array : ");
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }

    int key;
    printf("Enter the element you want to search : ");
    scanf("%d", &key);

    int found = BinarySearch(size,arr,key);

    if(found != -1){
        printf("Element found at index %d: ", found);
    }
    else{
        printf("Element not found !!!");
    }

    return 0;
    
}