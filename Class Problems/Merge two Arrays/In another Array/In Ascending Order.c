#include <stdio.h>

int main() {
    int N, M;
    printf("Enter sizes of the two arrays: ");
    scanf("%d %d", &N, &M);

    int arr1[N], arr2[M];
    printf("Enter elements of first array: ");
    for(int i=0; i<N; i++)
        scanf("%d", &arr1[i]);

    printf("Enter elements of second array: ");
    for(int i=0; i<M; i++)
        scanf("%d", &arr2[i]);
        
        
    int Marr[N+M];
    for(int i=0; i<N; i++)
        Marr[i]=arr1[i];
    for(int i=0; i<M; i++)
        Marr[N+i]=arr2[i];

    // Selection sort to sort merged array
    for(int i=0; i<N+M-1; i++) {
        int minIndex=i;
        for(int j=i+1; j<N+M; j++) {
            if(Marr[j]<Marr[minIndex])
                minIndex=j;
        }
        // Swap
        if(minIndex!=i) {
            int temp=Marr[i];
            Marr[i]=Marr[minIndex];
            Marr[minIndex]=temp;
        }
    }
    
// Bubble sort
/*
for(int i=0; i<N+M-1; i++) {
        for(int j=0; j<N+M-1-i; j++) {
            if(Marr[j]>Marr[j+1]) {  // Swap if current > next
                int temp=Marr[j];
                Marr[j]=Marr[j+1];
                Marr[j+1]=temp;
            }
        }
    }

*/
    
    // Print merged and sorted array
    printf("Merged and Sorted Array: ");
    for(int i=0; i<N+M; i++)
        printf("%d ", Marr[i]);
    printf("\n");

return 0;
}
