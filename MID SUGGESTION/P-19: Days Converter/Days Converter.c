#include <stdio.h>

int main() {
    int d, y, w;
    
    printf("Enter the days: ");
    scanf("%d", &d);
    y=d/365;
    w=(d%365)/7;
    d=(d%365)%7;
    
    printf("%d years %d weeks %d days.\n", y, w, d);

    return 0;
}
