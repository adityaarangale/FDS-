#include <stdio.h>

#define MAX 100

// Stack implementation
char stack[MAX];
int top = -1;

void push(char c) {
    if (top < MAX - 1) {
        top++;
        stack[top] = c;
    } else {
        printf("Stack overflow\n");
    }
}

char pop() {
    if (top >= 0) {
        char c = stack[top];
        top--;
        return c;
    } else {
        return '\0'; // Stack underflow
    }
}

int isMatchingPair(char open, char close) {
    return (open == '(' && close == ')') ||
           (open == '[' && close == ']') ||
           (open == '{' && close == '}');
}

int areBracketsBalanced(const char *expr) {
    for (int i = 0; expr[i] != '\0'; i++) {
        char ch = expr[i];
        if (ch == '(' || ch == '{' || ch == '[') {
            push(ch);
        } else if (ch == ')' || ch == '}' || ch == ']') {
            char popped = pop();
            if (!isMatchingPair(popped, ch)) {
                return 0; // Not balanced
            }
        }
    }
    return top == -1;
}

int main() {
    char expr[MAX];

    printf("Enter an expression: ");
    scanf("%s", expr);  // Note: doesn't handle spaces or multiple lines

    if (areBracketsBalanced(expr)) {
        printf("Brackets are balanced.\n");
    } else {
        printf("Brackets are not balanced.\n");
    }

    return 0;
}