//
//  LinkList.cpp
//  Queue
//
//  Created by Jelani on 12/02/2018.
//  Copyright © 2018 Tap. TOUCH. All rights reserved.
//



//#include <sstream>
#include <iostream>
#include "LinkList.h"

using namespace std;



// Done
void LinkList::addAtFront(int number, string first, string last, float score) {

    
    
    Node* tmp = new Node(number, first, last, score);
    tmp -> setNextPtr(front);
    front = tmp;
    num_elements++;
}


// Done
void LinkList::createANode(int number, string first, string last, float score) {
    Node *tmp = new Node(number, first, last, score);
    
    
    if (front == NULL) {
        front = back = tmp;
        front -> setNextPtr(nullptr);
    }
    else {
        tmp -> setNextPtr(front);
        front = tmp;
        
    }
    num_elements++;
}

/*
void LinkList::createABackNode(int number, string first, string last, float score) {
    Node *tmp = new Node(number, first, last, score);
    
    
    if (back == NULL) {
        back = tmp;
        back -> setNextPtr(nullptr);
    }
    else {
        back -> setNextPtr(tmp);
        back = tmp;
    }
}
*/

void LinkList::insertAtPosition(int number, string first, string last, float score, int atPos) {
    Node *tmp = new Node(number, first, last, score);
    if (atPos == -1 || atPos > num_elements) {
        throw out_of_range("Out of range");
    }
    Node*next = front;
    Node*cur = new Node;
    
    if (atPos == 1) {
        addAtFront(number, first, last, score);
        return;
    }
    
    for (int i = 0; i <= num_elements; i++) {
        
        if (atPos == i) {
            cur = next;
            next = next -> getNextPtr();
            cur -> setNextPtr(tmp);
            tmp -> setNextPtr(next);
            
        }

        //next = next -> getNextPtr();
    }
    num_elements++;
}

void LinkList::addAtBack(int number, string first, string last, float score) {
    if (front == NULL) {
        throw out_of_range("Out of range");
    }
    
    
    Node *tmp = new Node(number, first, last, score);
    Node *s = front;
    while (s->getNextPtr() != NULL) {
        s = s -> getNextPtr();
    }
    tmp -> setNextPtr(nullptr);
    s -> setNextPtr(tmp);
    back = tmp;
    num_elements++;
    
}

void LinkList::deleteAtFront() {
    if (front == NULL) {
        throw out_of_range("out of range");
        
    }
    string theString = " ";
    Node *delPtr = new Node;
    Node *tmp = new Node;
    tmp = front;
    theString = front -> getRecord();
    front = front -> getNextPtr();
    delPtr = tmp;
    free(delPtr);
    num_elements--;
    
}

void LinkList::deleteAtBack() {
    if (back == NULL) {
        throw out_of_range("out of range");
        
    }
    Node *tmp = new Node();
    Node *s = front;
    while (s->getNextPtr() != NULL) {
        tmp = s;
        s = s -> getNextPtr();
    }
    back = tmp;
    tmp -> setNextPtr(nullptr);
    free(s);
    
    
    
    
    
    num_elements--;
}

string LinkList::displayFront() {
    if (front == NULL) {
        throw out_of_range("Please add to front of Stack first.");
    }
    Node*tmp = new Node;
    tmp = front;
    
    return tmp -> getRecord();
}

string LinkList::displayBack() {
    if (back == NULL) {
        throw out_of_range("Please add to back of Queue first.");
    }
    Node *tmp = back;
    
    return tmp -> getRecord();
}

string LinkList::displayTheList() {
    if (front == NULL) {
        cout << "List is Empty";
        return "List is Empty";
    }
    
    Node *tmp = new Node;
    tmp = front;
    cout << "Link list: " << endl;
    while (tmp != NULL) {
        cout << tmp->getRecord() << "-> ";
        tmp=tmp->getNextPtr();
        
    }
    if (tmp == NULL) {
        return "done";
    }
    
   return tmp -> getRecord();
}

int LinkList::size() {
    return num_elements;
}

bool LinkList::isEmpty() {
    return front == NULL;
}

LinkList::~LinkList() {
    front = NULL;
    back = NULL;
}

void LinkList::searchList(int number, string first, string last, float score) {
    Node *tmp = new Node(number, first, last, score);
    int counter = 0;
    tmp = front;
    stringstream ss;
    ss << number << ", " << first << " " << last << ", " << score;
    string theStr = ss.str();
    while (tmp != NULL) {
        
        counter++;
        if (tmp -> getRecord() == theStr) {
            cout << "Element " << tmp -> getRecord();
            cout << " found at position " << counter << endl;
            return;
        }
        tmp = tmp -> getNextPtr();
        
        
    }
    
    
    cout << "Element " << theStr << " not found" << endl;
}
