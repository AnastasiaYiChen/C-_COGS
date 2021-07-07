//============================================================================
// Name        : implementingAQueue.cpp
// Author      : Yi Chen
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++11, Ansi-style
//============================================================================


#include <iostream>
#include "Person.h"
#include "Queue.h"

int main() {
    //build a Queue object;
    Queue *q = new Queue();
    //
    for (int i = 0; i < 8; i ++) {
        Person *p = new Person("LOOP1_" + to_string(i));
        q->enqueue(p);
    }
    //use dequeue
    q->dequeue();
    int i = 0;
    while(i < 2) {
        Person *p = new Person("LOOP2_" + to_string(i));
        q->enqueue(p);
        i++;
    }
    //dequeue a person when queue is full and traversal 2 times;
    i = 0;
    while(i < 10) {
        q->dequeue();
        i++;
    }
    return 0;

}