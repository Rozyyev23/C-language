#include <stdio.h>
#include <math.h>

int main() {
    double x1, y1, x2, y2;
    double distance;

    printf("Введите координаты первой точки (x y): ");
    scanf("%lf %lf", &x1, &y1);
    
    printf("Введите координаты второй точки (x y): ");
    scanf("%lf %lf", &x2, &y2);

    distance = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));

    printf("Расстояние между двумя точками: %.2lf\n", distance);

    return 0;
}