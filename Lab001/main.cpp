//
//  main.cpp
//  Lab001
//
//  Created by Jelani on 18/02/2018.
//  Copyright © 2018 Tap. TOUCH. All rights reserved.
//

#include <iostream>
#include "Queue.h"

using namespace std;

int main() {
    // insert code here...
    cout << "Hello, World!\n";
    
    //List* list = new List();
    Queue q;
    
    q.enqueue(1999, "Thomas", "Grant", 3.2);
    q.enqueue(1001, "Jelani", "Nicholls", 5.0);
    q.enqueue(1919, "ME", "ME", 4.0);
    q.searchQueue(1919, "ME", "ME", 4.0);
    //q.dequeue();
    q.displayQueue();
    
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
