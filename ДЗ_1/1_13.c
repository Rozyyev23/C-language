#include <stdio.h>

int main() {
    double x, y;

    printf("Введите координаты точки (x y): ");
    scanf("%lf %lf", &x, &y);

    if (x > 0 && y > 0) {
        printf("Точка принадлежит первой четверти\n");
    } else if (x < 0 && y > 0) {
        printf("Точка принадлежит второй четверти\n");
    } else if (x < 0 && y < 0) {
        printf("Точка принадлежит третьей четверти\n");
    } else if (x > 0 && y < 0) {
        printf("Точка принадлежит четвертой четверти\n");
    } else {
        printf("Точка находится на одной из осей\n");
    }

    return 0;
}