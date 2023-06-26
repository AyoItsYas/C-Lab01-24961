#include <stdio.h>

// Input two integers and display the total

int main(void)
{
    int x, y;

    printf("Enter value for X : ");
    scanf("%i", &x);

    printf("Enter value for Y : ");
    scanf("%i", &y);

    int z = x + y;

    printf("\n%i + %i = %i", x, y, z);

    return 0;
}