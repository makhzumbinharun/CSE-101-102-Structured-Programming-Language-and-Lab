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
    printf("Enter the new element: ");
    scanf("%d", &val);
    for(int i=N; i>=index; i--){
        arr[i]=arr[i-1];
    }
    n++;
    arr[index]=val;
    printf("After insertion: ");
    for(int i=0; i<=N; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}
