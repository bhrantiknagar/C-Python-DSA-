// 1.  Implement two stacks in a single array, growing from opposite ends.  


#include <stdio.h>
#define MAX 10

int arr[MAX];
int top1 = -1;
int top2 = MAX;

void push1(int value) {
    if (top1 + 1 == top2) {
        printf("Stack Overflow\n");
        return;
    }
    arr[++top1] = value;
}

void push2(int value) {
    if (top1 + 1 == top2) {
        printf("Stack Overflow\n");
        return;
    }
    arr[--top2] = value;
}

int pop1() {
    if (top1 == -1) {
        printf("Stack 1 Underflow\n");
        return -1;
    }
    return arr[top1--];
}

int pop2() {
    if (top2 == MAX) {
        printf("Stack 2 Underflow\n");
        return -1;
    }
    return arr[top2++];
}

void display() {
    int i;

    printf("Stack 1: ");
    for (i = 0; i <= top1; i++)
        printf("%d ", arr[i]);

    printf("\nStack 2: ");
    for (i = MAX - 1; i >= top2; i--)
        printf("%d ", arr[i]);

    printf("\n");
}

int main() {
    push1(10);
    push1(20);
    push1(30);

    push2(100);
    push2(200);
    push2(300);

    display();

    printf("\nPopped from Stack 1: %d\n", pop1());
    printf("Popped from Stack 2: %d\n", pop2());

    display();

    return 0;
}
