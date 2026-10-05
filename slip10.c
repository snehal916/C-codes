#include <stdio.h>

#define MAX 100

int stack[MAX];
int top = -1;

// Push element
void push(int value)
{
    if (top == MAX - 1)
    {
        printf("Stack Overflow\n");
        return;
    }

    stack[++top] = value;
}

// Pop element
void pop()
{
    if (top == -1)
    {
        printf("Stack Underflow\n");
        return;
    }

    printf("Popped element: %d\n", stack[top--]);
}

// Check if stack is empty
int isEmpty()
{
    return top == -1;
}

// Check if stack is full
int isFull()
{
    return top == MAX - 1;
}

// Peek top element
void peek()
{
    if (isEmpty())
    {
        printf("Stack is empty\n");
        return;
    }

    printf("Top element: %d\n", stack[top]);
}

// Display stack
void display()
{
    if (isEmpty())
    {
        printf("Stack is empty\n");
        return;
    }

    printf("Stack elements: ");

    for (int i = 0; i <= top; i++)
    {
        printf("%d ", stack[i]);
    }

    printf("\n");
}

int main()
{
    int choice, value;

    do
    {
        printf("\n--- Stack Menu ---\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. Check if Empty\n");
        printf("6. Check if Full\n");
        printf("7. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter value to push: ");
            scanf("%d", &value);
            push(value);
            break;

        case 2:
            pop();
            break;

        case 3:
            peek();
            break;

        case 4:
            display();
            break;

        case 5:
            printf(isEmpty() ? "Stack is empty\n" : "Stack is not empty\n");
            break;

        case 6:
            printf(isFull() ? "Stack is full\n" : "Stack is not full\n");
            break;

        case 7:
            printf("Exiting program.\n");
            break;

        default:
            printf("Invalid choice! Try again.\n");
        }

    } while (choice != 7);

    return 0;
}