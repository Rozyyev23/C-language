#include <stdio.h>

int main() {
    int a, b;
    float average;

    printf("Введите значение переменной a: ");
    scanf("%d", &a);

    printf("Введите значение переменной b: ");
    scanf("%d", &b);

    average = (a + b) / 2.0;

    printf("Среднее арифметическое: %.2f\n", average);

    return 0;
}
