#include <stdio.h>

int main() {
	int N, M, i=0,j=0;
	scanf("%d %d", &N, &M);
	int arr1[N]; 
	while(i<N){
	    scanf("%d", &arr1[i]);
	    i++;
	}
	int arr2[M];
	while(j<M){
	    scanf("%d", &arr2[j]);
	    j++;
	}
	int Marr[N+M];
	for(int i=0; i<N+M; i++){
	    arr1[i]=Marr[i];
	}
	
	while(i<N && j<M){
	printf("%d \n %d", arr1[i], arr2[j]);
	i++;
	j++;
	}
return 0;
}

//Write a C program to merge two arrays in another array in ascending order.
