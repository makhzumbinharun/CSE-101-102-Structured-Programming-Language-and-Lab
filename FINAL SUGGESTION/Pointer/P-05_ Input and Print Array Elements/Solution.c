#include <stdio.h>

void scanarr(int N, int *ptr) {
    for (int i = 0; i < N; i++) {
        scanf("%d", ptr + i);
    }
}

void printarr(int N, int *ptr) {
    for (int i = 0; i < N; i++) {
        printf("%d ", *(ptr + i));
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
    scanarr(N, ptr);

    printf("Your Array: ");
    printarr(N, ptr);

    return 0;
}
