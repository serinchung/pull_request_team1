#include <stdio.h>

int bubble_sort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < 9; i++) 
        for (j = 0; j < n-i-1; j++) 
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[i+1];
                arr[j+1] = temp;
            }
    return *arr;
}

int main() {
    int arr[9] = {0,1,3,7,2,5,4,6,8};
    int arr_new = bubble_sort(arr, 9);
    for (int i = 0; i < 9; i++)
        printf("%d ", arr_new+i);

    return 0;
}
