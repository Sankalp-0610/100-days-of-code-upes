/*
Q9 (User Inputs, Operations & Output)
Write a program to calculate simple and compound interest for given principal, rate, and time.
*/
#include <stdio.h>
#include <math.h>

int main() {
    double principal, rate, time, si, ci;
    printf("Enter principal, rate, and time: ");
    scanf("%lf %lf %lf", &principal, &rate, &time);

    si = (principal * rate * time) / 100.0;
    ci = principal * (pow(1 + rate / 100.0, time) - 1);

    printf("Simple Interest = %.2lf\n", si);
    printf("Compound Interest = %.2lf\n", ci);
    return 0;
}
