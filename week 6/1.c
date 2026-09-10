// 1. Array Implementation of Circular Queue.


#include <stdio.h>
#define MAX 5

int queue[MAX];
int front = -1;
int rear = -1;

int isEmpty() {
    return front == -1;
}

int isFull() {
    return (rear + 1) % MAX == front;
}

void enqueue(int value) {
    if (isFull()) {
        printf("Queue Overflow\n");
        return;
    }

    if (front == -1) {
        front = 0;
        rear = 0;
    } else {
        rear = (rear + 1) % MAX;
    }

    queue[rear] = value;
    printf("%d inserted into queue\n", value);
}

int dequeue() {
    int value;

    if (isEmpty()) {
        printf("Queue Underflow\n");
        return -1;
    }

    value = queue[front];

    if (front == rear) {
        front = -1;
        rear = -1;
    } else {
        front = (front + 1) % MAX;
    }

    return value;
}

int getFront() {
    if (isEmpty()) {
        printf("Queue is empty\n");
        return -1;
    }

    return queue[front];
}

int getRear() {
    if (isEmpty()) {
        printf("Queue is empty\n");
        return -1;
    }

    return queue[rear];
}

void display() {
    int i;

    if (isEmpty()) {
        printf("Queue is empty\n");
        return;
    }

    printf("Circular Queue: ");

    i = front;

    while (1) {
        printf("%d ", queue[i]);

        if (i == rear)
            break;

        i = (i + 1) % MAX;
    }

    printf("\n");
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);

    display();

    printf("Front: %d\n", getFront());
    printf("Rear: %d\n", getRear());

    printf("Dequeued: %d\n", dequeue());
    printf("Dequeued: %d\n", dequeue());

    display();

    enqueue(50);
    enqueue(60);

    display();

    printf("Front: %d\n", getFront());
    printf("Rear: %d\n", getRear());

    return 0;
}
 