#include <stdio.h>

void scanarr(int N, int arr[]) {
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
}

void printarr(int N, int arr[]) {
    for (int i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int N;
    printf("Enter the size of the array: ");
    scanf("%d", &N);

    int arr1[N];
    int arr2[N];
    int *ptr1 = arr1;
    int *ptr2 = arr2;

    printf("Enter %d elements: ", N);
    scanarr(N, ptr1);

    for (int i = 0; i < N; i++) {
        *(ptr2 + i) = *(ptr1 + i);
    }

    printf("Second Array (Copied from the First): ");
    printarr(N, ptr2);

    return 0;
}
