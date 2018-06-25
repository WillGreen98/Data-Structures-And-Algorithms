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