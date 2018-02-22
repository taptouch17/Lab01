//
//  pQueue.h
//  Lab001
//
//  Created by Jelani on 22/02/2018.
//  Copyright © 2018 Tap. TOUCH. All rights reserved.
//

#ifndef pQueue_h
#define pQueue_h

#include "LinkList.h"
#include <iostream>
#include <string>

using namespace std;

class PQueue {
private:
    LinkList PQ;
    
public:
    bool isEmpty();
    int Size();
    string highestPriority();
    string end();
    string display();
    void push_back(int number, string first, string last, float score);
    void pop_front();
    void clear();
    
};


//===========================================================================//
//                   Member functions' definition                            //
//===========================================================================//

bool PQueue::isEmpty() {
    return PQ.isEmpty();
}

int PQueue::Size() {
    return PQ.size();
}

void PQueue::push_back(int number, string first, string last, float score) {
    
    
    
    
    
    if (PQ.size() == 0) {
        PQ.createANode(number, first, last, score);
        return;
    }
    if (number > PQ.getFront() -> getID()) {
        PQ.addAtFront(number, first, last, score);
        return;
    }
    if (number <= PQ.getFront() -> getID() && PQ.getFront() -> getNextPtr() == NULL) {
        PQ.addAtBack(number, first, last, score);
        return;
    }
    PQ.traverseList(number, first, last, score);
    
    
}

void PQueue::pop_front() {
    PQ.deleteAtFront();
}

string PQueue::display() {
    return PQ.displayTheList();
}

void PQueue::clear() {
    while (Size() != 0) {
        pop_front();
    }
}

string PQueue::highestPriority() {
    return PQ.displayFront();
}



#endif /* pQueue_h */
