#include <stdio.h>

int bubble_sort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < 10; i++) 
        for (j = 0; j < n-i-1; j++) 
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[i+1];
                arr[j+1] = temp;
            }
    return *arr;
}

int main() {
    int arr[10] = {9,1,3,7,13,5,4,16,8,11};
    for (int i = 0; i < 10; i++)
        printf("%d ", bubble_sort(arr,10) + i);

    return 0;
}
