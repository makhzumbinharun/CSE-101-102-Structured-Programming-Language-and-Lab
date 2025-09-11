#include <stdio.h>

int main() {
    int N;
    printf("Enter the Number: ");
    scanf("%d", &N);
    
    switch(N>0){
        
        case 1:
        printf("%d is Positive.", N);
        break;
        
        case 0:
            switch(N<0){
            
                case 0:
                printf("%d is Zero.", N);
                break;
        
                case 1:
                printf("%d is Negative.", N);
                break;
            }
        break;
    }

    return 0;
}
