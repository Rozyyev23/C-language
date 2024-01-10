#include <stdio.h>
#include <stdlib.h>

int main() {
    int arr[] = {3, 5, 1, 2, 8, 4, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;
    int i;

    for (i = 0; i < n; i++) {
        sum += arr[i];
    }

    float avg = (float) sum / n;
    int closest = arr[0];
    int minDiff = abs(arr[0] - avg);

    for (i = 1; i < n; i++) {
        if (abs(arr[i] - avg) < minDiff) {
            closest = arr[i];
            minDiff = abs(arr[i] - avg);
        }
    }

    printf("The element closest to the average is: %d\n", closest);

    return 0;
}
