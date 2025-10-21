#include <stdio.h>

int main() {
    int N;
    printf("Enter the size of Array: ");
    scanf("%d", &N);
    int arr[N];
    printf("Enter the elements: ");
    for(int i=0; i<N; i++){
        scanf("%d", &arr[i]);
    }
    printf("Before insertion: ");
    for(int i=0; i<N; i++){
        printf("%d ", arr[i]);
    }
    int index, val;
    printf("\nEnter an index: ");
    scanf("%d", &index);
    for(int i=index; i<N; i++){
        arr[i]=arr[i+1];
    }
    printf("After insertion: ");
    for(int i=0; i<N-1; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
