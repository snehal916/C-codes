#include <stdio.h>

int main()
{
    int n, x, low, high, mid, found = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    // Accept sorted array elements
    printf("Enter %d sorted elements in ascending order:\n", n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter value to search: ");
    scanf("%d", &x);

    // Binary search
    low = 0;
    high = n - 1;

    while (low <= high)
    {
        mid = (low + high) / 2;

        if (arr[mid] == x)
        {
            printf("%d found at position %d\n", x, mid + 1);
            found = 1;
            break;
        }
        else if (arr[mid] < x)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    if (!found)
    {
        printf("%d not found in the array\n", x);
    }

    return 0;
}