#include <stdio.h>

int main() {
    int N;
    
    printf("Enter the size of the Array: ");
    scanf("%d", &N);
    int arr[N], rev[N];
    printf("Enter %d elements:\n", N);
    for(int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    
    for(int i = 0; i < N; i++) {
        rev[i] = arr[N - 1 - i];
    }

    printf("Reversed array:\n");
    for(int i = 0; i < N; i++) {
        printf("%d ", rev[i]);
    }

    return 0;
}
