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
    int max1, max2;
    if(arr[0]>arr[1]) {
        max1=arr[0];
        max2=arr[1];
    }
    else if(arr[1]>arr[0]) {
        max1=arr[1];
        max2=arr[0];
    }

    for(int i=0; i<N; i++){
        if(arr[i]>max1){
            max2=max1;
            max1=arr[i];
        }
        else if(arr[i]<max1 && arr[i]>max2){
            max2=arr[i];
        }
    }

    printf("Second Largest Number: %d", max2);
return 0;
}
