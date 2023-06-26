// Execute the following code and analyze the output. Study the output format.

#include <stdio.h>

int main(void) // Best practice to return a status code at the end of execution hence specifying the return type; Best practice to specify the function parameters
{
    printf("The color: %s\n", "blue");
    printf("First number: %d\n", 12345);
    printf("Second number: %04d\n", 25);
    printf("Third number: %i\n", 1234);
    printf("Float number: %3.2f\n", 3.14159);
    printf("Hexadecimal: %x\n", 255);
    printf("Octal: %o\n", 255);
    printf("Unsigned value: %u\n", 150);
    // printf("Just print the percentage sign %%\n", 10); // Error raised as there are no format specifiers in the string hence the parameters passed raises an error
    printf("Just print the percentage sign %%\n");

    return 0; // Error raised since the main function returns void
}