#include <stdio.h>
#include <math.h>

// Структура, представляющая трехмерный вектор
typedef struct {
    double x;
    double y;
    double z;
} Vector3D;

// Функция для нахождения длины вектора
double vectorLength(Vector3D v) {
    return sqrt(v.x * v.x + v.y * v.y + v.z * v.z);
}

// Функция для нахождения скалярного произведения векторов
double dotProduct(Vector3D v1, Vector3D v2) {
    return v1.x * v2.x + v1.y * v2.y + v1.z * v2.z;
}

// Функция для нахождения векторного произведения векторов
Vector3D crossProduct(Vector3D v1, Vector3D v2) {
    Vector3D result;
    result.x = v1.y * v2.z - v1.z * v2.y;
    result.y = v1.z * v2.x - v1.x * v2.z;
    result.z = v1.x * v2.y - v1.y * v2.x;
    return result;
}

// Функции для операций сложения и вычитания векторов
Vector3D addVectors(Vector3D v1, Vector3D v2) {
    Vector3D result;
    result.x = v1.x + v2.x;
    result.y = v1.y + v2.y;
    result.z = v1.z + v2.z;
    return result;
}

Vector3D subtractVectors(Vector3D v1, Vector3D v2) {
    Vector3D result;
    result.x = v1.x - v2.x;
    result.y = v1.y - v2.y;
    result.z = v1.z - v2.z;
    return result;
}

int main() {
    Vector3D v1, v2;

    // Ввод информации о векторах
    printf("Введите координаты первого вектора (x, y, z): ");
    scanf("%lf %lf %lf", &v1.x, &v1.y, &v1.z);

    printf("Введите координаты второго вектора (x, y, z): ");
    scanf("%lf %lf %lf", &v2.x, &v2.y, &v2.z);

    // Вычисление результатов
    double length1 = vectorLength(v1);
    double length2 = vectorLength(v2);
    double dotProductResult = dotProduct(v1, v2);
    Vector3D crossProductResult = crossProduct(v1, v2);
    Vector3D sumResult = addVectors(v1, v2);
    Vector3D differenceResult = subtractVectors(v1, v2);

    // Вывод результатов
    printf("Длина первого вектора: %.2f\n", length1);
    printf("Длина второго вектора: %.2f\n", length2);
    printf("Скалярное произведение: %.2f\n", dotProductResult);
    printf("Векторное произведение: (%.2f, %.2f, %.2f)\n", crossProductResult.x, crossProductResult.y, crossProductResult.z);
    printf("Сумма векторов: (%.2f, %.2f, %.2f)\n", sumResult.x, sumResult.y, sumResult.z);
    printf("Разность векторов: (%.2f, %.2f, %.2f)\n", differenceResult.x, differenceResult.y, differenceResult.z);

    return 0;
}
