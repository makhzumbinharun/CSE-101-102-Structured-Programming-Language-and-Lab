#include <stdio.h>

int main(){
    int N;
    printf("Enter the size of the Array: ");
    scanf("%d", &N);

    int arr[N];
    printf("Enter the elements: ");
    for(int i = 0; i < N; i++)
        scanf("%d", &arr[i]);

    printf("Before Sorting: ");
    for(int i = 0; i < N; i++)
        printf("%d ", arr[i]);
    printf("\n");

    for(int i=0; i<N-1; i++){
        int minIndex=i;
        for(int j=i+1; j<N; j++){
            if(arr[j]>arr[minIndex]){
                minIndex=j;
            }
        }
        
        if(minIndex!=i){
            int temp=arr[i];
            arr[i]=arr[minIndex];
            arr[minIndex]=temp;
        }
    }

    printf("After Sorting (Descending): ");
    for(int i = 0; i < N; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
