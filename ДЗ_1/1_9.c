#include <stdio.h>

int main() {
    double a, b, c;

    printf("Введите три разных числа: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if ((a > b && a < c) || (a < b && a > c)) {
        printf("%.2f является средним числом\n", a);
    } else if ((b > a && b < c) || (b < a && b > c)) {
        printf("%.2f является средним числом\n", b);
    } else {
        printf("%.2f является средним числом\n", c);
    }

    return 0;
}