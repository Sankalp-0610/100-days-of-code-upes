/*
Q27 (Loops without Arrays/Strings)
Write a program to print the sum of the first n odd numbers.
*/
#include <stdio.h>

int main() {
    int n;
    long long sum = 0;
    printf("Enter n: ");
    scanf("%d", &n);

    int num = 1;
    for (int i = 1; i <= n; i++) {
        sum += num;
        num += 2;
    }

    printf("Sum of first %d odd numbers = %lld\n", n, sum);
    return 0;
}
