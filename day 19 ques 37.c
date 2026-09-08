/*
Q37 (Loops without Arrays/Strings)
Write a program to find the LCM of two numbers.
*/
#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    int x = a, y = b;
    while (y != 0) {
        int temp = y;
        y = x % y;
        x = temp;
    }
    int hcf = x;
    int lcm = (a / hcf) * b;

    printf("LCM of %d and %d = %d\n", a, b, lcm);
    return 0;
}
