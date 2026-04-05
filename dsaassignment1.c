#include <stdio.h>
#include <string.h>

#define MAX 100

int top = -1;
char stack[MAX];

// Push function
void push(char ch) {
    stack[++top] = ch;
}

// Pop function
char pop() {
    return stack[top--];
}

int main() {
    char str[MAX];
    int i;

    printf("Enter a string: ");
    scanf("%s", str);

    // Push all characters
    for(i = 0; i < strlen(str); i++) {
        push(str[i]);
    }

    // Pop to reverse string
    for(i = 0; i < strlen(str); i++) {
        str[i] = pop();
    }

    printf("Reversed string: %s", str);

    return 0;
}