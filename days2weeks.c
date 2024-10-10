/*
 * Auth: CADE PREISTER
 * Date: 10-09-24 (Due: 10-13-24)
 * Course: CSCI-2240 (Sec: 851)
 * Desc: ASSIGNMENT-05, Converts days into weeks.
 */

#include <stdio.h>

/* Main function */
int main(void)
{
    /* Declaration of variables */
    int days;
    int days_rem;
    int weeks;

    const int days_per_week = 7;

    /* Print and scan functions to enter loop */
    printf("*** Days to Weeks Program ***\nEnter the number of days (or 0 to quit): ");
    scanf("%d", &days);

    /* While loop that iterates until input is 0 or below  */
    while (days > 0)
    {
        /* Calculations for weeks and days remaining */
        days_rem = days % days_per_week;
        weeks = days / days_per_week;

        /* Displays the ouptut based on user input */
        printf("%d days amounts to: %d weeks, %d days.\n\n", days, weeks, days_rem);

        /* Prompts the user again */
        printf("Enter the number of days (or 0 to quit): ");
        scanf("%d", &days);
    }

    printf("Thank you for playing!\n\n");

    return 0;
}