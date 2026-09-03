/*
Q8 (User Inputs, Operations & Output)
Write a program to find and display the sum of the first n natural numbers.
*/
#include <stdio.h>

int main() {
    int n;
    long long sum = 0;
    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
        sum += i;

    printf("Sum of first %d natural numbers = %lld\n", n, sum);
    return 0;
}
