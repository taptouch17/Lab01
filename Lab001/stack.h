//
//  stack.h
//  Lab001
//
//  Created by Jelani on 18/02/2018.
//  Copyright © 2018 Tap. TOUCH. All rights reserved.
//

#ifndef stack_h
#define stack_h
#include "LinkList.h"
#include <iostream>
#include <string>

using namespace std;

class stack {
private:
    LinkList List;
    
public:
    bool isEmpty(); // tells us if the stack is empty.
    int Size(); // tells us the size of the Stack.
    string top(); // tells us the top of the the stack without removing it.
    void push(int number, string first, string last, float score); // Pushes an element on the top of the stack.
    string displayStack(); // displays the elements in the stack.
    void pop(); // pops the top of the stack.
    void clear(); // clears the stack from the front.
    void searchStack(int number, string first, string last, float score);
};



//===========================================================================//
//                   Member functions' definition                            //
//===========================================================================//


bool stack::isEmpty() {
    if (List.size() == 0) {
        return true;
    }
    return false;
}

int stack::Size() {
    return List.size();
}

string stack::top() {
    cout << "The top of the stack is: ";
    cout << List.displayFront() << endl;
    return List.displayFront();
}

void stack::push(int number, string first, string last, float score) {
    
    if (List.size() == 0) {
        List.createANode(number, first, last, score);
        return;
    }
    List.addAtFront(number, first, last, score);
    
    
}

void stack::pop() {
    
        List.deleteAtFront();
    
}

void stack::clear() {
    while (List.size() != 0) {
        List.deleteAtFront();
    }
}



string stack::displayStack() {
    cout << "The Stack is " << endl;
    
    return List.displayTheList();
}

void stack::searchStack(int number, string first, string last, float score) {
    List.searchList(number, first, last, score);
}
#endif /* stack_h */
