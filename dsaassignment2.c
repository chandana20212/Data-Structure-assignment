#include <stdio.h>
#include <string.h>

#define MAX 100

char stack[MAX];
int top = -1;

void push(char ch) {
    stack[++top] = ch;
}

void pop() {
    top--;
}

int main() {
    char exp[MAX];
    int i, flag = 1;

    printf("Enter expression: ");
    scanf("%s", exp);

    for(i = 0; i < strlen(exp); i++) {
        if(exp[i] == '(') {
            push(exp[i]);
        } else if(exp[i] == ')') {
            if(top == -1) {
                flag = 0;
                break;
            }
            pop();
        }
    }

    if(top != -1)
        flag = 0;

    if(flag)
        printf("Balanced Expression");
    else
        printf("Unbalanced Expression");

    return 0;
}