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
/*
ENTER THE CODES FOR SORTING
*/
  
return 0;
}
