#include <stdio.h>

// Input two numbers, swap the values and display the output. ( Before swap and after
// swap)

int main(void)
{
    int x, y;

    printf("Enter value for X : ");
    scanf("%i", &x);

    printf("Enter value for Y : ");
    scanf("%i", &y);

    printf("\nBefore swap,\n");
    printf("  X = %i\n", x);
    printf("  Y = %i\n", y);

    int temp = x;
    x = y;
    y = temp;

    printf("\nAfter swap,\n");
    printf("  X = %i\n", x);
    printf("  Y = %i\n", y);

    return 0;
}