#include <stdio.h>

void scanarr(int N, int arr[N]) {
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
}

void printarr(int N, int arr[N]) {
    for (int i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int N;
    printf("Enter the size of the array: ");
    scanf("%d", &N);

    int arr[N];
    int *ptr = arr;

    printf("Enter %d elements: ", N);
    scanarr(N, arr);

    printf("Before reverse: ");
    printarr(N, arr);

    for (int i = 0; i < N / 2; i++) {
        int temp = ptr[i];
        ptr[i] = ptr[N - 1 - i];
        ptr[N - 1 - i] = temp;
    }

    printf("After reverse: ");
    printarr(N, arr);

    return 0;
}
