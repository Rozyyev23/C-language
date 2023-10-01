#include <stdio.h>
#include <stdbool.h>

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int arr[], int size, bool ascending) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (ascending) {
                if (arr[j] > arr[j + 1]) {
                    swap(&arr[j], &arr[j + 1]);
                }
            }
            else {
                if (arr[j] < arr[j + 1]) {
                    swap(&arr[j], &arr[j + 1]);
                }
            }
        }
    }
}

int* sortArray(int arr[], int size, bool ascending) {
    int* sortedArray = (int*)malloc(size * sizeof(int)); // Выделяем память для отсортированного массива

    for (int i = 0; i < size; i++) {
        sortedArray[i] = arr[i]; // Копируем значения из исходного массива в новый массив
    }

    bubbleSort(sortedArray, size, ascending); // Сортируем новый массив

    return sortedArray;
}

int main() {
    int arr[] = { 5, 2, 9, 1, 8 };
    int size = sizeof(arr) / sizeof(arr[0]);
    bool ascending = true;

    printf("Исходный массив: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("");

    int* sortedArr = sortArray(arr, size, ascending);

    printf("Отсортированный массив (%s): ", ascending ? "по возрастанию" : "по убыванию");
    for (int i = 0; i < size; i++) {
        printf("%d ", sortedArr[i]);
    }
    printf("");

    free(sortedArr); // Освобождаем память

    return 0;
}