#include <stdio.h>
#include <math.h>

double function(double x) {
    return cos(pow(x, 5)) + pow(x, 4) - 345.3 * x - 23;
}

double findRoot(double a, double b, double tolerance) {
    double c = (a + b) / 2; // Находим середину отрезка [a, b]

    if (fabs(function(c)) < tolerance) { // Проверяем условие остановки: отклонение функции от 0 меньше заданной точности
        return c;
    }
    else if (function(a) * function(c) < 0) { // Функция имеет разные знаки на отрезках [a, c] и [c, b]
        return findRoot(a, c, tolerance); // Рекурсивный вызов для отрезка [a, c]
    }
    else {
        return findRoot(c, b, tolerance); // Рекурсивный вызов для отрезка [c, b]
    }
}

int main() {
    double a = 0; // Левая граница отрезка
    double b = 10; // Правая граница отрезка
    double tolerance = 0.001; // Точность

    // Выполняем поиск корня уравнения
    double root = findRoot(a, b, tolerance);

    printf("Корень уравнения на отрезке [%f, %f]: %f\n", a, b, root);

    return 0;
}
