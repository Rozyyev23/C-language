#include <stdio.h>
#include <stdbool.h>

// Функция для обычного перебора элементов массива
bool linearSearch(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return true;
        }
    }
    return false;
}

// Функция для двоичного поиска элемента в отсортированном массиве
bool binarySearch(int arr[], int low, int high, int key) {
    if (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == key) {
            return true;
        }
        else if (arr[mid] > key) {
            return binarySearch(arr, low, mid - 1, key);
        }
        else {
            return binarySearch(arr, mid + 1, high, key);
        }
    }

    return false;
}

int main() {
    int size = 100000000; // Размер массива
    int* arr = (int*)malloc(size * sizeof(int)); // Выделяем память для массива

    // Инициализируем массив значениями от 1 до size
    for (int i = 0; i < size; i++) {
        arr[i] = i + 1;
    }

    int key = 99999999; // Заданный элемент для поиска
    clock_t startLinear = clock(); // Запускаем таймер для обычного перебора
    bool foundLinear = linearSearch(arr, size, key); // Выполняем обычный перебор
    clock_t endLinear = clock(); // Завершаем таймер для обычного перебора

    clock_t startBinary = clock(); // Запускаем таймер для двоичного поиска
    bool foundBinary = binarySearch(arr, 0, size - 1, key); // Выполняем двоичный поиск
    clock_t endBinary = clock(); // Завершаем таймер для двоичного поиска

    float linearTime = (float)(endLinear - startLinear) / CLOCKS_PER_SEC;
    float binaryTime = (float)(endBinary - startBinary) / CLOCKS_PER_SEC;

    if (foundLinear) {
        printf("Элемент %d найден (обычный перебор). Время выполнения: %.6f сек\n", key, linearTime);
    }
    else {
        printf("Элемент %d не найден (обычный перебор). Время выполнения: %.6f сек\n", key, linearTime);
    }

    if (foundBinary) {
        printf("Элемент %d найден (двоичный поиск). Время выполнения: %.6f сек\n", key, binaryTime);
    }
    else {
        printf("Элемент %d не найден (двоичный поиск). Время выполнения: %.6f сек\n", key, binaryTime);
    }

    free(arr); // Освобождаем память

    return 0;
}
