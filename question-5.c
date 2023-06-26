#include <stdio.h>

// Input two numbers with decimals(fractions) and display the average with decimals

int main(void)
{
    float x, y;

    printf("Enter value for X : ");
    scanf("%f", &x);

    printf("Enter value for Y : ");
    scanf("%f", &y);

    float z = (x + y) / 2;

    printf("\n");
    printf("Average           : %lf\n", z);

    return 0;
}