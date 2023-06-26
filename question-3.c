#include <stdio.h>

// Input values for int,float,double and char data types and display the value of each of the
// variable.

int main(void)
{
    int a;
    float b;
    double c;
    char d;

    printf("Enter an integer  : ");
    scanf("%d", &a);

    printf("Enter a float     : ");
    scanf("%f", &b);

    printf("Enter a double    : ");
    scanf("%lf", &c);

    printf("Enter a character : ");
    scanf(" %c", &d);

    printf("\n");
    printf("Integer           : %i\n", a);
    printf("Float             : %f\n", b);
    printf("Double            : %lf\n", c);
    printf("Character         : %c\n", d);

    return 0;
}