#include <stdio.h>

int main() {
    int a, b, c;
    int max;

    printf("Введите три целых числа: ");
    scanf("%d %d %d", &a, &b, &c);

    max = a;

    if (b > max) {
        max = b;
    }

    if (c > max) {
        max = c;
    }

    printf("Наибольшее число: %d\n", max);

    return 0;
}