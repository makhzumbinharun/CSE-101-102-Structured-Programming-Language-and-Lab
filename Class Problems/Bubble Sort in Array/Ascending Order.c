#include<stdio.h>

int main(){
  int N;
  printf("Enter the size of the Array: ");
  scanf("%d", &N);
  int arr[N];
  printf("Enter the elements: ");
  for(int i=0; i<N; i++){
    scanf("%d", &arr[i]);
  }
  
  printf("Before Sorting: ");
  for(int i=0; i<N; i++){
    printf("%d ", arr[i]);
  }
    printf("\n");

for(int i=0; i<N-1; i++){
     for(int j=0; j<N-i-1; j++){
         if(arr[j]>arr[j+1]){
             int temp=arr[j];
             arr[j]=arr[j+1];
             arr[j+1]=temp;
         }
     }
 }
    printf("After Sorting: ");
    for(int i=0; i<N; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

return 0;
}
