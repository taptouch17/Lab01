//
//  Queue.hpp
//  Queue
//
//  Created by Jelani on 13/11/2017.
//  Copyright © 2017 Tap. TOUCH. All rights reserved.
//


#ifndef Queue_h
#define Queue_h

#include "LinkList.cpp"
#include <iostream>

using namespace std;

class Queue {
private:
    LinkList Listt;
    
public:
    //~Queue();
    int size(); //tells you the number of items in the ADT
    
    void enqueue(int number, string first, string last, float score); //inserts item at the back of queue
    
    void dequeue(); //removes an item from the front of the queue
    
    bool isEmpty(); //checks to see if ADT is empty
    
    string front(); //tells us the element at the front of the list without removing it
    
    void clear(); //makes the ADT empty
    
    string displayQueue(); // Displays items in queue
    
    void searchQueue(int number, string first, string last, float score); // searches for element in Queue
    
};

//===========================================================================//
//                   Member functions' definition                            //
//===========================================================================//

int Queue::size() {
    
    cout << "The size of the Queue is " << Listt.size() << endl;
    
    return Listt.size();
    
    
}

void Queue::searchQueue(int number, string first, string last, float score) {
    Listt.searchList(number, first, last, score);
}

void Queue::enqueue(int number, string first, string last, float score) {
    
    if (Listt.size() == 0) {
        Listt.createANode(number, first, last, score);
        return;
    }
    Listt.addAtBack(number, first, last, score);
}

void Queue::dequeue() {
    
    while (Listt.size() != 0) {
        Listt.deleteAtFront();
    }
}

string Queue::displayQueue() {
    cout << "The Queue is " << endl;
    
    return Listt.displayTheList();
}

#endif /* Queue_hpp */
