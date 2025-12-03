#include <stdio.h>
#include <math.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num <= 1)
        return 0;
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    FILE *fpt_in;
    FILE *fpt_even, *fpt_odd, *fpt_prime;
    char filename[1000] = "file3.txt";

    // Open input file in read mode
    fpt_in = fopen("file3.txt", "r");
    if (fpt_in == NULL) {
        printf("ERROR: Cannot open file %s\n", filename);
        return 1;
    }

    // Open output files in append mode
    fpt_even  = fopen("even.txt", "a");
    fpt_odd   = fopen("odd.txt", "a");
    fpt_prime = fopen("prime.txt", "a");

    if (fpt_even == NULL || fpt_odd == NULL || fpt_prime == NULL) {
        printf("ERROR: Cannot open output files\n");
        fclose(fpt_in); // Close input file before exiting
        return 1;
    }

    int num;
    // Read numbers from input file
    while (fscanf(fpt_in, "%d", &num) != EOF) {
        // Write even numbers
        if (num % 2 == 0)
            fprintf(fpt_even, "%d\n", num);
        else
            fprintf(fpt_odd, "%d\n", num);

        // Write prime numbers
        if (isPrime(num))
            fprintf(fpt_prime, "%d\n", num);
    }

    // Close all files
    fclose(fpt_in);
    fclose(fpt_even);
    fclose(fpt_odd);
    fclose(fpt_prime);

    printf("Numbers written to even.txt, odd.txt, and prime.txt successfully.\n");

    return 0;
}
