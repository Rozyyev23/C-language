#include <stdio.h>

int main() {
    int arr[] = {1, 2, 2, 3, 3, 3, 4, 5, 5, 5, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int count = 1;
    int i;

    for (i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1]) {
            count++;
        } else {
            printf("There are %d elements in a row that are equal to %d\n", count, arr[i - 1]);
            count = 1;
        }
    }

    printf("There are %d elements in a row that are equal to %d\n", count, arr[n - 1]);

    return 0;
}