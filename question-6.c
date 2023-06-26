#include <stdio.h>

// Input a student name, birth year and display student name with age.

int main(void)
{

    char name[50];
    int birthYear;

    printf("Enter student name : ");
    scanf("%s", name);

    printf("Enter birth year   : ");
    scanf("%d", &birthYear);

    int age = 2023 - birthYear;

    printf("\n");
    printf("Student name       : %s\n", name);
    printf("Student age        : %d\n", age);

    return 0;
}