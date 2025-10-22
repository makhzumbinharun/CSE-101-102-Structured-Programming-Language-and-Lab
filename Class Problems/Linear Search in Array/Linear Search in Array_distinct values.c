#include <stdio.h>

int main() {
    int N,s, y=0;
    printf("Enter the size of Array: ");
    scanf("%d", &N);
    int arr[N];
    printf("Enter the elements: ");
    for(int i=0; i<N; i++){
        scanf("%d", &arr[i]);
    }
    printf("Number to be searched: ");
    scanf("%d", &s);
    for(int i=0; i<N; i++){
        if(arr[i]==s){
            y++;
        printf("%d is in index: %d", s, i);
        }
    }
    if(y==0)
        printf("%d is not in the array", s);
    return 0;
}
