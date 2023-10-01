#include <stdio.h>
#include <limits.h>

int sumBetweenMaxAndMin(int arr[], int size) {
    int maxIndex = 0;
    int minIndex = 0;

    // Находим индексы максимального и минимального элементов
    for (int i = 1; i < size; i++) {
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
    }

    // Определяем начальный и конечный индексы
    int start = (maxIndex < minIndex) ? maxIndex : minIndex;
    int end = (maxIndex > minIndex) ? maxIndex : minIndex;

    int sum = 0;
    for (int i = start; i <= end; i++) {
        sum += arr[i];
    }

    return sum;
}

int main() {
    int arr[] = {5, 2, 9, 1, 8, 4, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    int sum = sumBetweenMaxAndMin(arr, size);

    printf("Сумма элементов между максимальным и минимальным элементами: %d\n", sum);

    return 0;
}