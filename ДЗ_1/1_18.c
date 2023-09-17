#include <stdio.h>
#include <limits.h>

int main() {
    int number;
    int max = INT_MIN;
    int min = INT_MAX;

    printf("Введите последовательность чисел (0 для завершения ввода): ");

    while (1) {
        scanf("%d", &number);

        if (number == 0) {
            break;
        }

        if (number > max) {
            max = number;
        }

        if (number < min) {
            min = number;
        }
    }

    printf("Максимальное значение: %d\n", max);
    printf("Минимальное значение: %d\n", min);

    return 0;
}
