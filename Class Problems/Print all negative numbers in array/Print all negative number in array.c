#include<stdio.h>
int main(){
    int N;
    printf("Enter the size of the Array: ");
    scanf("%d", &N);
    int arr[N];
    printf("Enter the Elements: ");
    for(int i=0; i<N; i++){
        scanf("%d", &arr[i]);
    }
    int count=0;
    printf("Negative Number: ");
    for(int i=0; i<N; i++){
            if(arr[i]<0){
                count++;
                printf("%d ", arr[i]);
            }
    }
    printf("\n Total Negative Number: %d", count);


return 0;
}
