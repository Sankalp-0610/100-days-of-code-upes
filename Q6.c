/*
Q6 (User Inputs, Operations & Output)
Write a program to swap two numbers using a third variable.
*/
#include <stdio.h>

int main() {
    double a, b, temp;
    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);

    temp = a;
    a = b;
    b = temp;

    printf("After swapping: a = %.2lf, b = %.2lf\n", a, b);
    return 0;
}
