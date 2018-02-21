//
//  main.cpp
//  Lab001
//
//  Created by Jelani on 18/02/2018.
//  Copyright © 2018 Tap. TOUCH. All rights reserved.
//

#include <iostream>
#include "Queue.h"
#include "stack.h"
#include "deque.h"

using namespace std;

int main() {
    // insert code here...
    cout << "Hello, World!\n";
    
    //List* list = new List();
    Queue q;
    stack theStack;
    deque DQ;
    
    //q.enqueue(1999, "Thomas", "Grant", 3.2);
    //q.enqueue(1001, "Jelani", "Nicholls", 5.0);
    //q.enqueue(1919, "ME", "ME", 4.0);
    //q.searchQueue(1919, "ME", "ME", 4.0);
    //theStack.push(1999, "Thomas", "Grant", 3.2);
    //theStack.push(1919, "ME", "ME", 4.0);
    //theStack.push(1001, "Jelani", "Nicholls", 5.0);
    //theStack.pop();
    //theStack.searchStack(1919, "ME", "ME", 4.0);
    //theStack.top();
    //theStack.displayStack();
    //q.dequeue();
    //q.displayQueue();
    DQ.push_back(1999, "Thomas", "Grant", 3.2);
    DQ.push_back(1999, "A", "Grant", 3.2);
    DQ.push_back(1919, "ME", "ME", 4.0);
    DQ.push_front(1001, "Jelani", "Nicholls", 5.0);
    DQ.begin();
    DQ.pop_back();
    DQ.insert(50, "Yer", "Mom", 1.5, 2);
    DQ.begin();
    DQ.end();
    DQ.Size();
    DQ.display();
    
    //list->addTail(1999, "Thomas", "Grant", 3.2);
    //list->addTail(1001, "Annette", "Grey", 2.2);
    //list->addTail(1875, "Steve", "Alonzo", 3.0);
    //list->addTail(1555, "Jean", "Steele", 1.8);
    
    cout << "\nDisplay List:\n";
    //cout << list->displayList() << "\n";
    
    cout << "\nDisplay Names:\n";
    //cout << list->displayNames() << "\n";
    
    return 0;
}
