#include <stdio.h>

int main() {
    int n;
    int doubleFactorial = 1;

    printf("Введите число n: ");
    scanf("%d", &n);

    while (n > 0) {
        doubleFactorial *= n;
        n -= 2;
    }

    printf("Двойной факториал: %d\n", doubleFactorial);

    return 0;
}