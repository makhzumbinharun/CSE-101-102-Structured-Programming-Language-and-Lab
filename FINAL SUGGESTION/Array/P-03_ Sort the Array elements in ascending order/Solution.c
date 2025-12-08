#include <stdio.h>


void scanarr(int N, int arr[N]){
    for(int i = 0 ; i< N ; i++){
	    scanf("%d",&arr[i]);
	}
}

int main(){
  int N;
  printf("Enter the size of the Array: ");
  scanf("%d", &N);
  int arr[N];
  printf("Enter the elements: ");
  scanarr(N, arr);
  
  printf("Before Sorting: ");
  for(int i=0; i<N; i++){
    printf("%d ", arr[i]);
  }
    printf("\n");
 
 
 for(int i=0; i<N; i++){
    for(int j=i+1; j<N; j++){
        if(arr[i]>arr[j]){
            int temp=arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
        }
    }
 }
 
 
    printf("After Sorting (Ascending): ");
    for(int i=0; i<N; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

return 0;
}
