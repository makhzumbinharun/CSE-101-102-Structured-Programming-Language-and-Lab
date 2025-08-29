#include<stdio.h>

int main() {
int B, P, N, POWER=1;
printf("Enter the value of Base: ");
scanf("%d",&B);
printf("Enter the value of Power: ");
scanf("%d",&P);

for(int i=1; i<=P; i++) {
POWER*=B;
}

printf("The power is: %d", POWER); 

return 0;

}
