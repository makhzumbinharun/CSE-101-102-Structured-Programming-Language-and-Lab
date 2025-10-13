#include <stdio.h>

int main() {
    int N;

    printf("Enter the size of the array: ");
    scanf("%d", &N);

    int arr[N];

    printf("Enter %d elements:\n", N);
    for(int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < N / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[N - 1 - i];
        arr[N - 1 - i] = temp;
    }

    printf("Reversed array:\n");
    for(int i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
