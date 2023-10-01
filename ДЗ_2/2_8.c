#include <stdio.h>
#include <stdbool.h>

bool hasDuplicate(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                return true; // Если найдены два одинаковых элемента, возвращаем true
            }
        }
    }

    return false; // Если не найдены два одинаковых элемента, возвращаем false
}

int main() {
    int arr[] = { 5, 2, 9, 1, 8 };
    int size = sizeof(arr) / sizeof(arr[0]);

    if (hasDuplicate(arr, size)) {
        printf("В массиве имеются одинаковые элементы.\n");
    } else {
        printf("В массиве нет одинаковых элементов.\n");
    }

    return 0;
}