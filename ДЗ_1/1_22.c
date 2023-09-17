#include <stdio.h>

int findGCD(int a, int b) {
    if (b == 0) {
        return a;
    }
    return findGCD(b, a % b);
}

int main() {
    int num1, num2;

    printf("Введите первое положительное целое число: ");
    scanf("%d", &num1);

    printf("Введите второе положительное целое число: ");
    scanf("%d", &num2);

    int gcd = findGCD(num1, num2);
    printf("Наибольший общий делитель (НОД) чисел %d и %d: %d\n", num1, num2, gcd);

    return 0;
}
