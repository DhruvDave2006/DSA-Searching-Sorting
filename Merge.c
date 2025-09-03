#include <stdio.h>
#include <math.h>

void Merge(int arr[], int low, int mid, int high);

void MergeSort(int arr[],int low, int high){
    if(low  < high){
        int mid = floor((low + high) / 2);
        MergeSort(arr,low,mid);
        MergeSort(arr,mid + 1, high);
        Merge(arr,low,mid,high);
    }
}

void Merge(int arr[], int low, int mid, int high){
    int i, j, k;
    int n1 = mid - low + 1;
    int n2 = high - mid;

    int leftArr[n1], rightArr[n2];

    for (i = 0; i < n1; i++) {
        leftArr[i] = arr[low + i];
    }
    for (j = 0; j < n2; j++) {
        rightArr[j] = arr[mid + 1 + j];
    }

    i = 0;
    j = 0;
    k = low;

    while (i < n1 && j < n2) {
        if (leftArr[i] <= rightArr[j]) {
            arr[k] = leftArr[i];
            i++;
        } else {
            arr[k] = rightArr[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = leftArr[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = rightArr[j];
        j++;
        k++;
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

    MergeSort(arr,0,size - 1);

    printf("Sorted Array : ");
    for(int i = 0; i < size; i++){
        printf("%d", arr[i]);
    }

    return 0;
}