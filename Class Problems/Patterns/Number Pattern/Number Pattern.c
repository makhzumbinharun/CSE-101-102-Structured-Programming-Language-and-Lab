#include <stdio.h>

int main() {
    int N;
    printf("Enter the number of rows: ");
    scanf("%d", &N);
    
    for(int i=1; i<=N; i++){
        
        for(int j=1; j<=i; j++){
            
            printf("%d", i);
        }
        printf("\n");
    }

    return 0;
}
