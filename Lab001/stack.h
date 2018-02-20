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
    bool isEmpty();
    int Size();
    string top;
    void push(int number, string first, string last, float score);
    void pop();
    void swap();
};

#endif /* stack_h */
