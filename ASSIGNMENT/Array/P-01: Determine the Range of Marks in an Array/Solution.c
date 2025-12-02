#include <stdio.h>

void scanarr(int N, int arr[N]){
    for(int i = 0 ; i< N ; i++){
	    scanf("%d",&arr[i]);
	}
}

int main() {
    int N;
    printf("Enter the number of students: ");
    scanf("%d", &N);

    int arr[N];
    printf("Enter the marks: ");
    scanarr(N, arr);

    int min = arr[0], max = arr[0];
    for(int i = 1; i < N; i++) {
        if(arr[i] > max) max = arr[i];
        if(arr[i] < min) min = arr[i];
    }

    printf("Range of marks: %d - %d\n", min, max);

    return 0;
}
