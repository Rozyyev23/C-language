#include <stdio.h>

void printDigitsInReverse(int n) {
    if (n == 0) {
        return;
    }

    printf("%d ", n % 10);
    printDigitsInReverse(n / 10);
}

int main() {
    int N;

    printf("Введите натуральное число N: ");
    scanf("%d", &N);

    printf("Цифры числа %d в обратном порядке: ", N);
    printDigitsInReverse(N);
    printf("");

    return 0;
}