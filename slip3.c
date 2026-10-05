#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int n, x, found = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    // Initialize random number generator
    srand(time(0));

    // Fill array with random integers
    printf("Random array: ");

    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % 100;
        printf("%d ", arr[i]);
    }

    printf("\n");

    // Accept value to search
    printf("Enter value to search: ");
    scanf("%d", &x);

    // Linear search
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            printf("%d found at position %d\n", x, i + 1);
            found = 1;
            break;
        }
    }

    if (!found)
    {
        printf("%d not found in the array\n", x);
    }

    return 0;
}