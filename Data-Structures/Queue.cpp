//
// Created by Will  on 25/06/2018.
//

#include <iostream>

#include "Queue.h"

Queue::Queue() {
    std::cout << "I am an example of a Queue" << std::endl;
}

template<typename T>
struct Queue {
    T size;
    T front;
    T back;
    unsigned capacity;
    T *queue_array;
};

template<typename T>
struct Queue *queue_list(unsigned capacity) {
    Queue *queue = new Queue();
    queue->capacity = capacity;
    queue->front = queue->size = 0;
    queue->back = capacity - 1;
    queue->queue_array = reinterpret_cast<T *>(queue->capacity * sizeof(int));

    return queue;
}

int isEmpty(Queue *queue) { return queue->size == 0; }
int isFull(Queue *queue) { return queue->size == queue->capacity; }

void enqueue(Queue *queue, int value) {
    if(isFull(queue)) { return; }

    queue->back = (queue->back + 1) % queue->capacity;
    queue->queue_array[queue->back] = value;
    queue->size = queue->size + 1;
}

int dequeue(Queue *queue) {
    if(isEmpty(queue)) { return INT8_MIN; }

    int object = queue->queue_array[queue->front];
    queue->front = queue->front = (queue->front + 1) % queue->capacity;
    queue->size = queue->size - 1;
    return object;
}

int get_front(Queue *queue) {
    if(isEmpty(queue)) { return INT8_MIN; }
    return queue->queue_array[queue->front];
}

int get_rear(Queue *queue) {
    if(isEmpty(queue)) { return INT8_MIN; }
    return queue->queue_array[queue->back];
}