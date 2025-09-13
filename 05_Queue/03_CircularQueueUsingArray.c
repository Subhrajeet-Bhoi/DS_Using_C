#include <stdio.h>
#include <stdlib.h>

#define SIZE 5  // Maximum size of the circular queue

typedef struct {
    int arr[SIZE];
    int front, rear;
} CircularQueue;

// Initialize the queue
void initQueue(CircularQueue *q) {
    q->front = -1;
    q->rear = -1;
    for (int i = 0; i < SIZE; i++) {
        q->arr[i] = -1;  // -1 indicates empty slot
    }
}

// Check if the queue is empty
int isEmpty(CircularQueue *q) {
    return (q->front == -1);
}

// Check if the queue is full
int isFull(CircularQueue *q) {
    return ((q->rear + 1) % SIZE == q->front);
}

// Enqueue operation
void enqueue(CircularQueue *q, int value) {
    if (isFull(q)) {
        printf("Queue is FULL! Cannot insert %d\n", value);
        return;
    }
    if (q->front == -1)  // First insertion
        q->front = 0;
    q->rear = (q->rear + 1) % SIZE;
    q->arr[q->rear] = value;
    printf("%d inserted\n", value);
}

// Dequeue operation
int dequeue(CircularQueue *q) {
    if (isEmpty(q)) {
        printf("Queue is EMPTY!\n");
        return -1;
    }
    int data = q->arr[q->front];
    q->arr[q->front] = -1;  // Mark slot as empty
    if (q->front == q->rear) {
        // Queue becomes empty
        q->front = q->rear = -1;
    } else {
        q->front = (q->front + 1) % SIZE;
    }
    return data;
}

// Display the current state of the array
void displayArray(CircularQueue *q) {
    printf("Array state: ");
    for (int i = 0; i < SIZE; i++) {
        if (q->arr[i] == -1)
            printf("[ ] ");
        else
            printf("[%d] ", q->arr[i]);
    }
    printf("\n");
}

// Main function to demonstrate the queue
int main() {
    CircularQueue q;
    initQueue(&q);

    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);
    displayArray(&q);

    printf("Dequeued: %d\n", dequeue(&q));
    displayArray(&q);

    enqueue(&q, 40);
    enqueue(&q, 50);
    enqueue(&q, 60);  // Should wrap around
    displayArray(&q);

    printf("Dequeued: %d\n", dequeue(&q));
    printf("Dequeued: %d\n", dequeue(&q));
    displayArray(&q);

    return 0;
}
