#include <stdio.h>

int main() {
    int N;
    printf("Enter the size of Array: ");
    scanf("%d", &N);
    if (N < 2) {
        printf("Array size should be at least 2\n");
        return 1;
    }

    int arr[N];
    printf("Enter the elements: ");
    for(int i = 0; i < N; i++){
        scanf("%d", &arr[i]);
    }

    int max1, max2;
    if(arr[0] > arr[1]){
        max1 = arr[0];
        max2 = arr[1];
    } else {
        max1 = arr[1];
        max2 = arr[0];
    }

    for(int i = 2; i < N; i++){
        if(arr[i] > max1){
            max2 = max1; 
            max1 = arr[i];
        } else if(arr[i] > max2){
            max2 = arr[i];
        }
    }

    printf("Max1: %d Max2: %d\n", max1, max2);
    return 0;
}
