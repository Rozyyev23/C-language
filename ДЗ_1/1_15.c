#include <stdio.h>

int main() {
    int n;
    int doubleFactorial = 1;

    printf("Введите число n: ");
    scanf("%d", &n);

    for (int i = n; i > 0; i -= 2) {
        doubleFactorial *= i;
    }

    printf("Двойной факториал: %d\n", doubleFactorial);

    return 0;
}
