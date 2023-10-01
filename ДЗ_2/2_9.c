#include <stdio.h>

int countConsecutiveEqual(int arr[], int size) {
    int count = 0; // Переменная для подсчета количества повторяющихся элементов
    int i = 0;

    while (i < size) {
        int currElem = arr[i]; // Текущий элемент
        int j = i + 1;

        while (j < size && arr[j] == currElem) {
            count++;
            j++;
        }

        i = j; // Устанавливаем значение i на следующий уникальный элемент
    }

    return count;
}

int main() {
    int arr[] = { 2, 2, 3, 3, 3, 4, 5, 5, 5, 5 };
    int size = sizeof(arr) / sizeof(arr[0]);

    int count = countConsecutiveEqual(arr, size);

    printf("Количество элементов, идущих подряд и равных между собой: %d\n", count);

    return 0;
}