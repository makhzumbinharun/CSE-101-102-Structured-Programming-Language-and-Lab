#include <stdio.h>

int main() {
    int Y;
    
    printf("Enter a Year: ");
    scanf("%d", &Y);
    
    printf("%d is %s Leap Year.\n", Y, (Y%400==0) || (Y%4==0 && Y%100!= 0)? "a" : "not a");

    return 0;
}
