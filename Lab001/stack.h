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
    LinkList Stack;
    
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
    if (Stack.size() == 0) {
        return true;
    }
    return false;
}

int stack::Size() {
    return Stack.size();
}

string stack::top() {
    cout << "The top of the stack is: ";
    cout << Stack.displayFront() << endl;
    return Stack.displayFront();
}

void stack::push(int number, string first, string last, float score) {
    
    if (Stack.size() == 0) {
        Stack.createANode(number, first, last, score);
        return;
    }
    Stack.addAtFront(number, first, last, score);
    
    
}

void stack::pop() {
    
        Stack.deleteAtFront();
    
}

void stack::clear() {
    while (Stack.size() != 0) {
        Stack.deleteAtFront();
    }
}



string stack::displayStack() {
    cout << "The Stack is " << endl;
    
    return Stack.displayTheList();
}

void stack::searchStack(int number, string first, string last, float score) {
    Stack.searchList(number, first, last, score);
}
#endif /* stack_h */
