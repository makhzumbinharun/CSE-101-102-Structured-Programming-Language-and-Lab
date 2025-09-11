#include <stdio.h>

int main() {
    int N, o, SUM=0;
    printf("Enter N:");
    scanf("%d", &N);
    
    for(o=1; o<=N; o++){
        if(o%2!=0){
            SUM+=o;
        }
    }
    printf("Summation of all odd numbers from 1 to %d is: %d", N, SUM);

    return 0;
}
