#include <stdio.h>

int main() {
    int number;

    printf("Введите неотрицательное целое число: ");
    scanf("%d", &number);

    int tens = (number / 10) % 10;

    printf("Число десятков: %d\n", tens);

    return 0;
}
