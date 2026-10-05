#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 100

// Function to accept and display random array
void acceptDisplay(int arr[], int n)
{
    srand(time(0));

    printf("Random array: ");

    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % 100;
        printf("%d ", arr[i]);
    }

    printf("\n");
}

// Function to perform linear search
int linearSearch(int arr[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            return i + 1;   // 1-based position
        }
    }

    return -1;              // Not found
}

int main()
{
    int n, x, pos;
    int arr[MAX];

    printf("Enter size of array: ");
    scanf("%d", &n);

    if (n <= 0 || n > MAX)
    {
        printf("Invalid array size! Enter size between 1 and 100.\n");
        return 1;
    }

    acceptDisplay(arr, n);

    printf("Enter value to search: ");
    scanf("%d", &x);

    pos = linearSearch(arr, n, x);

    if (pos != -1)
    {
        printf("%d found at position %d\n", x, pos);
    }
    else
    {
        printf("%d not found in the array\n", x);
    }

    return 0;
}