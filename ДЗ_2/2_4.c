#include <stdio.h>

void printNumbersRecursive(int n) {
    if (n > 0) {
        printNumbersRecursive(n - 1); // Рекурсивный вызов функции с уменьшенным значением на 1
        printf("%d ", n); // Вывод числа
    }
}

int main() {
    int n = 10; // Задайте здесь ваше натуральное число

    printf("Все числа от 1 до %d: ", n);
    printNumbersRecursive(n);
    printf("");

    return 0;
}