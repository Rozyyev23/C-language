#include <stdio.h>

int main() {
    int N;
    int power = 0;

    printf("Введите число N: ");
    scanf("%d", &N);

    while (N % 2 == 0) {
        N /= 2;
        power++;
    }

    if (N == 1) {
        printf("Число %d является степенью числа 22: 2^%d\n", N, power);
    } else {
        printf("Число %d не является степенью числа 22\n", N);
    }

    return 0;
}
