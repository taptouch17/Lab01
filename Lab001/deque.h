//
//  deque.h
//  Lab001
//
//  Created by Jelani on 20/02/2018.
//  Copyright © 2018 Tap. TOUCH. All rights reserved.
//

#ifndef deque_h
#define deque_h
#include "LinkList.h"
#include <iostream>
#include <string>

using namespace std;

class deque {
private:
    LinkList deque;
    
public:
    bool isEmpty();
    int Size();
    string begin();
    string end();
    string display();
    void push_back(int number, string first, string last, float score);
    void push_front(int number, string first, string last, float score);
    void pop_front();
    void pop_back();
    void insert(int number, string first, string last, float score, int atPos);
    void clear();
    
};

//===========================================================================//
//                   Member functions' definition                            //
//===========================================================================//

bool deque::isEmpty() {
    if (deque.size() == 0) {
        return true;
    }
    return false;
}

int deque::Size() {
    cout << "the size is " << deque.size() << endl;
    return deque.size();
}

string deque::begin() {
    cout << "the front of the double ended queue is: " << deque.displayFront() << endl;
    return deque.displayFront();
}

string deque::end() {
    cout << "the back of the double ended queue is: " << deque.displayBack() << endl;
    return deque.displayBack();
}

void deque::push_back(int number, string first, string last, float score) {
    if (deque.size() == 0) {
        deque.createANode(number, first, last, score);
        return;
    }
    deque.addAtBack(number, first, last, score);
}

void deque::push_front(int number, string first, string last, float score) {
    if (deque.size() == 0) {
        deque.createANode(number, first, last, score);
        return;
    }
    deque.addAtFront(number, first, last, score);
}

void deque::pop_front() {
     deque.deleteAtFront();
}

void deque::pop_back() {
    deque.deleteAtBack();
}

void deque::insert(int number, string first, string last, float score, int atPos) {
    deque.insertAtPosition(number, first, last, score, atPos);
    
}

string deque::display() {
    return deque.displayTheList();
}

void deque::clear() {
    while (deque.size() != 0) {
        deque.deleteAtFront();
    }
}
#endif /* deque_h */
