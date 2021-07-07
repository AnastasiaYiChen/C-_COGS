//
// Created by yichen on 2020-10-04.
//

#ifndef MODULE01_ASSIGNMENT01_QUEUE_H
#define MODULE01_ASSIGNMENT01_QUEUE_H
#include "Person.h"

class Queue {

public:
    Queue();

    /* Any additional constructors needed */
    virtual ~Queue();

    bool enqueue(Person *person);       /* Adds a Person (Person's address/pointer) to the queue (at the tail, of course)  */
    Person * dequeue();             /* Returns Person's address/pointer, removing it from the queue (from the head, of course)  */
    Person * inspect() const;       /* Returns the address/pointer of the Person at the head, without removing it  */
    /* (Both dequeue and inspect should return null pointer, if the queue is empty)  */
    bool isEmpty() const;           /* Returns true, if the queue is empty, false otherwise */
    bool isFull() const;            /* Returns true, if the queue is full, false otherwise */
    int qLen() const;               /* Returns the length of the queue */

private:
    static const int MAXSIZE{8};
    /* Before C++11 it would be:
    enum { MAXSIZE = 20 };  */

    Person * q_[MAXSIZE]{};
    Person * q;

    // Well, the q_ array that could be allocated dynamically looks like this:  Plane * * q_
    // - although, if I were you, I would try the fixed-sized array first

    int tail_;
    int head_;
    int cnt_;   // We don't really need this, but it is the easier way!
};
#endif //MODULE01_ASSIGNMENT01_QUEUE_H
