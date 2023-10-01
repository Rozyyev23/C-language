#include <stdio.h>
#include <stdlib.h>

void changeSignOfMaxAbsolute(int arr[], int size) {
    int maxIndex = 0; // Индекс максимального элемента
    int maxAbsolute = abs(arr[0]); // Максимальное значение

    // Находим максимальный по модулю элемент
    for (int i = 1; i < size; i++) {
        if (abs(arr[i]) > maxAbsolute) {
            maxIndex = i;
            maxAbsolute = abs(arr[i]);
        }
    }

    // Меняем знак максимального элемента
    arr[maxIndex] = -arr[maxIndex];
}

int main() {
    int arr[] = { 2, -5, 9, -7, 3 };
    int size = sizeof(arr) / sizeof(arr[0]);

    changeSignOfMaxAbsolute(arr, size);

    printf("Измененный массив: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}