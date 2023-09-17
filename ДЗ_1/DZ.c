#include<stdio.h>

int main() {
    int a = 5;
    int b = 10;
    int temp;

    printf("Исходные значения: a = %d, b = %d\n", a, b);

    temp = a;
    a = b;
    b = temp;

    printf("Измененные значения: a = %d, b = %d\n", a, b);

    return 0;
}

/* Второй способ*/

#include<stdio.h>

int main() {
    int a = 5;
    int b = 10;

    printf("Исходные значения: a = %d, b = %d\n", a, b);

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    printf("Измененные значения: a = %d, b = %d\n", a, b);

    return 0;
}