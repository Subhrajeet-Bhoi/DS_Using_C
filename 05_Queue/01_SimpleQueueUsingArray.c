//Linear Queue Using Array
#include <stdio.h>
#include <stdlib.h>

#define MAX 5

struct Queue {
    int arr[MAX];
    int rear;
};

// Initialize Queue
void init(struct Queue *q) {
    q->rear = -1;
}

// Check if queue is empty
int isEmpty(struct Queue *q) {
    return q->rear == -1;
}

// Check if queue is full
int isFull(struct Queue *q) {
    return q->rear == MAX - 1;
}

// Enqueue operation
void enqueue(struct Queue *q, int data) {
    if (isFull(q)) {
        printf("Queue Overflow\n");
        return;
    }
    q->arr[++q->rear] = data;
}

// Dequeue operation
int dequeue(struct Queue *q) {
    if (isEmpty(q)) {
        printf("Queue Underflow\n");
        return -1;
    }
    int front = q->arr[0];
    for (int i = 0; i < q->rear; i++) {
        q->arr[i] = q->arr[i + 1]; // shifting
    }
    q->rear--;
    return front;
}

// Peek operation
int peek(struct Queue *q) {
    if (isEmpty(q)) {
        printf("Queue is Empty\n");
        return -1;
    }
    return q->arr[0];
}

// Driver Code
int main() {
    struct Queue q;
    init(&q);

    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);
    enqueue(&q, 40);
    enqueue(&q, 50);

    while (!isEmpty(&q)) {
        printf("%d\n", peek(&q));
        dequeue(&q);
    }

    return 0;
}
