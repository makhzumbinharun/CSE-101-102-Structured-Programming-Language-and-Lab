#include <stdio.h>

void scanarr(int N, int arr[N]) {
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
}

int main() {
    int N;
    printf("Enter size of the Array: ");
    scanf("%d", &N);

    int arr[N];
    printf("Enter %d elements: ", N);
    scanarr(N, arr);

    long long P = 1;
    int found = 0;

    for (int i = 0; i < N; i++) {
        if (arr[i] % 2 == 0 && arr[i] % 4 != 0) {
            P *= arr[i];
            found = 1;
        }
    }

    if (found)
        printf("Multiplication of Elements: %lld\n", P);
    else
        printf("No elements divisible by 2 but not by 4.\n");

    return 0;
}
