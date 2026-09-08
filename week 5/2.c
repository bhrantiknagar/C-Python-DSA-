// 2. Convert a Decimal number to Binary using a Stack.


#include <stdio.h>
#define MAX 32

int stack[MAX];
int top = -1;

void push(int value) {
    if (top == MAX - 1) {
        printf("Stack Overflow\n");
        return;
    }
    stack[++top] = value;
}

int pop() {
    if (top == -1) {
        return -1;
    }
    return stack[top--];
}

int main() {
    int decimal, n, binary;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    n = decimal;

    if (decimal == 0) {
        printf("Binary: 0\n");
        return 0;
    }

    while (n > 0) {
        push(n % 2);
        n = n / 2;
    }

    printf("Binary: ");
    while (top != -1) {
        binary = pop();
        printf("%d", binary);
    }

    printf("\n");

    return 0;
}
