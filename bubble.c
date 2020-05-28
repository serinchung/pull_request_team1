#include <stdio.h>

int bubble_sort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < 14; i++) 
        for (j = 0; j < n-i-1; j++) 
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[i+1];
                arr[j+1] = temp;
            }
    return *arr;
}

int main() {
    int arr[14] = {21,9,1,3,7,13,5,18,4,16,8,11,2,6};
    for (int i = 0; i < 14; i++)
        printf("%d ", bubble_sort(arr,14) + i);

    return 0;
}
