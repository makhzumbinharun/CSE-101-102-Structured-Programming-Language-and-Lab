#include <stdio.h>

int main() {
    int n;
    printf("Size of the array: ");
    scanf("%d", &n);

    int arr[n], even[n], odd[n];
    int i, e = 0, o = 0;

    printf("Elements in array: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Separate even and odd
    for(i = 0; i < n; i++) {
        if(arr[i] % 2 == 0)
            even[e++] = arr[i];
        else
            odd[o++] = arr[i];
    }

    // Print even array
    printf("Even elements in array: ");
    for(i = 0; i < e; i++) {
        printf("%d ", even[i]);
    }

    // Print odd array
    printf("\nOdd elements in array: ");
    for(i = 0; i < o; i++) {
        printf("%d ", odd[i]);
    }

    printf("\n");
    return 0;
}
