#include <stdio.h>

void leftRotateByTwo(int arr[], int size) {
    int temp = arr[0]; // Сохраняем первый элемент во временную переменную

    // Сдвигаем элементы на две позиции влево
    for (int i = 0; i < size - 1; i++) {
        arr[i] = arr[i + 2];
    }

    arr[size - 2] = temp; // Перемещаем первый элемент в конец массива
    arr[size - 1] = arr[1]; // Второй элемент становится предпоследним
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Исходный массив: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    leftRotateByTwo(arr, size);

    printf("Циклически сдвинутый массив: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}