//
// Created by yichen on 2020-10-04.
//

#include "Queue.h"
#include <iostream>
#include "Person.h"
using namespace std;

Queue::Queue() {
    q = new Person[MAXSIZE];                        //initialize the elements in the queue;
    tail_ = 0;
    head_ = 0;
    cnt_ = 0;
    cout << "init queue, head_: " << head_ << " tail_: " << tail_ << " cnt_: " << cnt_ << "." << endl;
}

Queue::~Queue() {
    delete[] q;
    q = nullptr;                 //Release space;

}

bool Queue::enqueue(Person *person) {
    if(isFull()){                            // If the queue length equal to the max capacity of the array
        cout << "Failed to enqueue, queue is full!" << endl;
        return false;
    }
    else{
        q[tail_] = *person;                   // else allocate the new person at end of the array address-> tail
        tail_++;                                    //thus tail have to move backward an address
        tail_ = (tail_ + MAXSIZE) % MAXSIZE;                    //when tail = 8, tail position = 0
        cnt_ ++;                                    //and the length of the array increase one
        string fullTip;
        if(isFull()){                            // If the queue length equal to the max capacity of the array
            fullTip = ", queue is full!";
        }
        cout << person->m_strName << " enqueue, head_: " << head_ << " tail_: " << tail_ << " cnt_: " << cnt_ << fullTip << endl;//print info to make easy read.

        return true;
    }

}

Person* Queue::dequeue() {
    if(isEmpty()){                                      // If the queue length equal to 0
        cout << "Failed to dequeue, queue is empty!" << endl;
        return nullptr;
    }
    Person* headPerson = inspect();
    head_ ++;                                               //head increase 1
    head_ = head_ %  MAXSIZE;                               // when head move to q[7], head_ = 0
    cnt_ --;                                                // count decrease 1
    string emptyTip;
    if(isEmpty()){                                          // If the queue length equal 0
        emptyTip = ", queue is empty!";
    }
    cout << headPerson->m_strName << " dequeue, head_: " << head_ << " tail_: " << tail_ << " cnt_: " << cnt_ << emptyTip << endl;
    return headPerson;
}

Person* Queue::inspect() const {
    return &q[head_];                                       //get head address
}

bool Queue::isEmpty() const {
    if (cnt_ == 0) {                                        //check the array length
        return true;
    } else {
        return false;
    }
}

bool Queue::isFull() const {
    if (cnt_ == MAXSIZE) {
        return true;
    } else {
        return false;
    }
}

int Queue::qLen() const {
    return cnt_;
}