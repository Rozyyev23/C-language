#include <stdio.h>

int main() {
    int number;

    printf("Введите натуральное число: ");
    scanf("%d", &number);

    int lastDigit = number % 10;

    printf("Последняя цифра: %d\n", lastDigit);

    return 0;
}
