#include <stdio.h>
#include <string.h>

#define MAX 100

char stack[MAX];
int top = -1;

// Push character onto stack
void push(char ch) {
    if (top == MAX - 1) {
        printf("Stack Overflow\n");
        return;
    }

    stack[++top] = ch;
}

// Pop character from stack
char pop() {
    if (top == -1) {
        printf("Stack Underflow\n");
        return '\0';
    }

    return stack[top--];
}

int main() {
    char str[MAX], reversed[MAX];
    int len;

    printf("Enter a string: ");
    scanf("%s", str);

    // Find length of string
    len = strlen(str);

    // Push all characters onto stack
    for (int i = 0; i < len; i++) {
        push(str[i]);
    }

    // Pop characters to reverse the string
    for (int i = 0; i < len; i++) {
        reversed[i] = pop();
    }

    // Add null character
    reversed[len] = '\0';

    printf("Reversed string: %s\n", reversed);

    return 0;
}