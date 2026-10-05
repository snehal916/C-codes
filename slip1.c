
#include <stdio.h>

#define MAX 100

int stack[MAX];
int top = -1;

// Push function
void push(int value)
{
    if (top == MAX - 1)
    {
        printf("Stack Overflow\n");
        return;
    }

    stack[++top] = value;
}

// Pop function
void pop()
{
    if (top == -1)
    {
        printf("Stack is empty\n");
        return;
    }

    printf("Popped element: %d\n", stack[top--]);
}

int main()
{
    int n, value;

    printf("Enter number of elements to push: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &value);
        push(value);
    }

    printf("\nPopping elements from stack:\n");

    while (top != -1)
    {
        pop();
    }

    return 0;
}
