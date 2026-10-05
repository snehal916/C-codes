#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node
{
    int data;
    struct Node *next;
};

// Function to create linked list
struct Node *createList(int n)
{
    struct Node *head = NULL;
    struct Node *temp = NULL;
    struct Node *newNode = NULL;
    int value;

    for (int i = 0; i < n; i++)
    {
        printf("Enter data for node %d: ", i + 1);
        scanf("%d", &value);

        newNode = (struct Node *)malloc(sizeof(struct Node));

        newNode->data = value;
        newNode->next = NULL;

        if (head == NULL)
        {
            head = newNode;
            temp = head;
        }
        else
        {
            temp->next = newNode;
            temp = newNode;
        }
    }

    return head;
}

// Function to display linked list
void displayList(struct Node *head)
{
    if (head == NULL)
    {
        printf("Linked list is empty\n");
        return;
    }

    struct Node *temp = head;

    printf("Linked list elements: ");

    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    printf("\n");
}

// Function to search an element
void searchElement(struct Node *head, int key)
{
    struct Node *temp = head;
    int pos = 1;

    while (temp != NULL)
    {
        if (temp->data == key)
        {
            printf("%d found at position %d\n", key, pos);
            return;
        }

        temp = temp->next;
        pos++;
    }

    printf("%d not found in the list\n", key);
}

int main()
{
    struct Node *head = NULL;
    int choice, n, key;

    do
    {
        printf("\n--- Singly Linked List Menu ---\n");
        printf("1. Create and Display Linked List\n");
        printf("2. Search an Element\n");
        printf("3. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter number of nodes: ");
            scanf("%d", &n);

            head = createList(n);
            displayList(head);
            break;

        case 2:
            if (head == NULL)
            {
                printf("List is empty. Create list first.\n");
                break;
            }

            printf("Enter element to search: ");
            scanf("%d", &key);

            searchElement(head, key);
            break;

        case 3:
            printf("Exiting program.\n");
            break;

        default:
            printf("Invalid choice! Try again.\n");
        }

    } while (choice != 3);

    return 0;
}