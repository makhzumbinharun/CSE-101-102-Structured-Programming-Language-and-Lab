#include <stdio.h>

void scanarr(int N, int arr[N]){
    for(int i = 0 ; i< N ; i++){
	    scanf("%d",&arr[i]);
	}
}

int main() {
    int N;
    printf("Enter the size of the Array: ");
    scanf("%d", &N);

    int arr[N];
    printf("Enter the elements: ");
    scanarr(N, arr);

    printf("Unique elements: ");
    int found = 0;
    for(int i = 0; i < N; i++) {
        int count = 0;
        for(int j = 0; j < N; j++) {
            if(arr[i] == arr[j]) {
                count++;
            }
        }

        if(count == 1) {
            printf("%d ", arr[i]);
            found = 1;
        }
    }

    if(found == 0) { 
        printf("No unique elements found!");
    }

    return 0;
}
