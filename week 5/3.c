// 3. Implement a Queue using an array with Enqueue, Dequeue, Front, Rear, isFull, and isEmpty operations.


#include <stdio.h>
#define MAX 5

int queue[MAX];
int front = -1;
int rear = -1;

// Check if queue is empty
int isEmpty() {
    return front == -1;
}

// Check if queue is full
int isFull() {
    return rear == MAX - 1;
}

// Add an element to the queue
void enqueue(int value) {
    if (isFull()) {
        printf("Queue Overflow\n");
        return;
    }

    if (front == -1)
        front = 0;

    queue[++rear] = value;
    printf("%d inserted into queue\n", value);
}

// Remove an element from the queue
int dequeue() {
    int value;

    if (isEmpty()) {
        printf("Queue Underflow\n");
        return -1;
    }

    value = queue[front++];

    // Reset queue when it becomes empty
    if (front > rear) {
        front = -1;
        rear = -1;
    }

    return value;
}

// Display the front element
int getFront() {
    if (isEmpty()) {
        printf("Queue is empty\n");
        return -1;
    }

    return queue[front];
}

// Display the rear element
int getRear() {
    if (isEmpty()) {
        printf("Queue is empty\n");
        return -1;
    }

    return queue[rear];
}

// Display the queue
void display() {
    int i;

    if (isEmpty()) {
        printf("Queue is empty\n");
        return;
    }

    printf("Queue: ");

    for (i = front; i <= rear; i++)
        printf("%d ", queue[i]);

    printf("\n");
}

int main() {

    enqueue(10);
    enqueue(20);
    enqueue(30);

    display();

    printf("Front: %d\n", getFront());
    printf("Rear: %d\n", getRear());

    printf("Dequeued: %d\n", dequeue());

    display();

    printf("Front: %d\n", getFront());
    printf("Rear: %d\n", getRear());

    return 0;
}
