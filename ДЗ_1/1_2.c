#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;

    printf("Введите значение катета a: ");
    scanf("%lf", &a);

    printf("Введите значение катета b: ");
    scanf("%lf", &b);

    c = sqrt(a * a + b * b);

    printf("Гипотенуза c = %lf\n", c);

    return 0;
}
