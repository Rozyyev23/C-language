#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int findClosestToMean(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i]; // Сумма всех элементов массива
    }

    double mean = (double)sum / size; // Среднее значение всех элементов

    int closest = arr[0]; // Первый элемент массива как начальное значение ближайшего элемента
    double minDiff = fabs(arr[0] - mean); // Начальное значение минимального отклонения

    for (int i = 1; i < size; i++) {
        double diff = fabs(arr[i] - mean); // Отклонение текущего элемента от среднего значения

        if (diff < minDiff) { // Если найдено более близкое значение
            closest = arr[i];
            minDiff = diff;
        }
    }

    return closest;
}

int main() {
    int arr[] = { 5, 2, 9, 1, 8 };
    int size = sizeof(arr) / sizeof(arr[0]);

    int closestElement = findClosestToMean(arr, size);

    printf("Элемент, наиболее близкий к среднему значению: %d\n", closestElement);

    return 0;
}