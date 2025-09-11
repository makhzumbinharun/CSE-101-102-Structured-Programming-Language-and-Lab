#include <stdio.h>

int main() {
    int N, i=1, SUM=0;
    printf("Enter N: ");
    scanf("%d", &N);
    do{
        if(i%2==0 && i%5==0){
            SUM+=i;
        }
        i++;
    }
    while(i<=N);
    printf("Summation:%d", SUM);
    return 0;
}
