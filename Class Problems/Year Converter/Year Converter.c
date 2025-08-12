#include <stdio.h>

int main () {
    int total_days, years, weeks, days, remaining_days;

    // Input number of days from user
    printf("Enter the number of days: ");
    scanf("%d", &total_days);

    // Calculate years
    years = total_days/365;

    // Calculate remaining days after extracting years
    remaining_days = total_days % 365;

    // Calculate weeks from remaining days
    weeks = remaining_days / 7;

    // Calculate remaining days after extracting weeks
    days = remaining_days % 7;

    // Display the result
    printf("%d days = %d years, %d weeks, and %d days\n", total_days, years, weeks, days);

    return 0;
}
