#include <stdio.h>

int main() {
    double a, b, c;

    printf("Введите три длины отрезков: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a + b > c && a + c > b && b + c > a) {
        printf("Треугольник существует\n");

        if (a == b && b == c) {
            printf("Треугольник равносторонний\n");
        } else if (a == b || b == c || a == c) {
            printf("Треугольник равнобедренный\n");
        } else {
            printf("Треугольник разносторонний\n");
        }
    } else {
        printf("Треугольник не существует\n");
    }

    return 0;
}