#include <stdio.h>

int main() {
    int N;
    int i = 1;

    printf("Введите число N: ");
    scanf("%d", &N);

    printf("Точные квадраты натуральных чисел не превосходящие %d:\n", N);

    while (i * i <= N) {
        printf("%d ", i * i);
        i++;
    }

    printf("\n");

    return 0;
}