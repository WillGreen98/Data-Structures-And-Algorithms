//
// Created by Will  on 25/06/2018.
//

#include <iostream>

#include "Queue.h"

template<typename T>
struct Queue_Object {
    T size;
    T front;
    T back;
    unsigned capacity;
    T *queue_array;
};

template<typename T>
struct Queue *Queue_list(unsigned capacity) {
    Queue_Object<T> queue = new Queue_Object<T>();
    queue->capacity = capacity;
    queue->front = queue->size = 0;
    queue->back = capacity - 1;
    queue->queue_array = reinterpret_cast<T *>(queue->capacity * sizeof(int));

    return queue;
}

template<typename T>
int isEmpty(Queue_Object<T> *queue) { return queue->size == 0; }
template<typename T>
int isFull(Queue_Object<T> *queue) { return queue->size == queue->capacity; }

template<typename T>
void enqueue(Queue_Object<T> *queue, int value) {
    if(isFull(queue)) { return; }

    queue->back = (queue->back + 1) % queue->capacity;
    queue->queue_array[queue->back] = value;
    queue->size = queue->size + 1;
}

template<typename T>
int dequeue(Queue_Object<T> *queue) {
    if(isEmpty(queue)) { return INT8_MIN; }

    int object = queue->queue_array[queue->front];
    queue->front = queue->front = (queue->front + 1) % queue->capacity;
    queue->size = queue->size - 1;
    return object;
}

template<typename T>
int get_front(Queue_Object<T> *queue) {
    if(isEmpty(queue)) { return INT8_MIN; }
    return queue->queue_array[queue->front];
}

template<typename T>
int get_rear(Queue_Object<T> *queue) {
    if(isEmpty(queue)) { return INT8_MIN; }
    return queue->queue_array[queue->back];
}