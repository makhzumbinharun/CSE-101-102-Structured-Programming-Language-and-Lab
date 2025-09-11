#include <stdio.h>

int main() {
    int N, o=1, SUM=0;
    printf("Enter N:");
    scanf("%d", &N);
      
    while(o<=N){
        if(o%2!=0){
            SUM+=o;
        }
        o++;
    }
    printf("Summation of all odd numbers from 1 to %d is: %d", N, SUM);

    return 0;
}
