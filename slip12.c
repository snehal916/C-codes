#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n, i, j, minIndex, temp;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    srand(time(0));

    // Generate random array
    printf("Random array: ");

    for (i = 0; i < n; i++) {
        arr[i] = rand() % 100;
        printf("%d ", arr[i]);
    }

    printf("\n");

    // Selection Sort
    for (i = 0; i < n - 1; i++) {
        minIndex = i;

        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // Swap
        temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }

    // Display sorted array
    printf("Sorted array (ascending order): ");

    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}