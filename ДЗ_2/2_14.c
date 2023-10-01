#include <stdio.h>

int calculateY(int arr[], int size) {
    int m = size;
    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            m = i;
            break;
        }
    }

    // Если массив не содержит отрицательных элементов
    if (m == size) {
        m = size - 1;
    }

    int y = 0;
    int product = 1;
    for (int i = 0; i <= m; i++) {
        product *= arr[i];
        y += product;
    }

    return y;
}

int main() {
    int arr[] = {2, 5, 3, -1, 4, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    int y = calculateY(arr, size);

    printf("Значение y: %d\n", y);

    return 0;
}
