#include <stdio.h>

void mergeArrays(int arr1[], int size1, int arr2[], int size2, int mergedArray[]) {
    int i = 0; // Индекс для массива arr1
    int j = 0; // Индекс для массива arr2
    int k = 0; // Индекс для mergedArray

    // Объединение элементов в mergedArray
    while (i < size1 && j < size2) {
        if (arr1[i] <= arr2[j]) {
            mergedArray[k++] = arr1[i++];
        } else {
            mergedArray[k++] = arr2[j++];
        }
    }

    // Добавление оставшихся элементов из arr1 (если такие есть)
    while (i < size1) {
        mergedArray[k++] = arr1[i++];
    }

    // Добавление оставшихся элементов из arr2 (если такие есть)
    while (j < size2) {
        mergedArray[k++] = arr2[j++];
    }
}

int main() {
    int arr1[] = {1, 3, 5, 7, 9};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);

    int arr2[] = {2, 4, 6, 8};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    int mergedArray[size1 + size2];

    mergeArrays(arr1, size1, arr2, size2, mergedArray);

    printf("Объединенный массив: ");
    for (int i = 0; i < size1 + size2; i++) {
        printf("%d ", mergedArray[i]);
    }
    printf("\n");

    return 0;
}