#include <stdio.h>
#include <math.h>

int main() {
    int a, b;
    double geometric_mean;

    printf("Введите значение переменной a: ");
    scanf("%d", &a);

    printf("Введите значение переменной b: ");
    scanf("%d", &b);

    geometric_mean = sqrt((double)(a * b));

    printf("Среднее геометрическое: %.2f\n", geometric_mean);

    return 0;
}