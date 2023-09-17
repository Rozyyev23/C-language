#include <stdio.h>

int main() {
    int number;
    int sum = 0;

    printf("Введите последовательность чисел (-9999 для завершения ввода): ");

    while (1) {
        scanf("%d", &number);

        if (number == -9999) {
            break;
        }

        printf("%d ", number);
        sum += number;
    }

    printf("\n");
    printf("Сумма элементов последовательности: %d\n", sum);

    return 0;
}
