//
//  List.h
//  Lab001
//
//  Created by Jelani on 18/02/2018.
//  Copyright © 2018 Tap. TOUCH. All rights reserved.
//



#ifndef LIST_H
#define LIST_H

#include "Node.h"

class List
{
private:
    Node* head;
    Node* tail;
    
public:
    List(){head = NULL; tail = NULL;}
    
    // Mutator functions
    void addTail(int, string, string, float);
    string removeHead();
    
    //Accessor Functions
    string displayList();
    string displayNames();
    string showHead();
};



void List::addTail(int number, string first, string last, float score)
{
    // create the new node
    Node* newObject = new Node(number, first, last, score);
    
    // Case #1 - Check if the is empty
    if (head == NULL)
    {
        head = tail = newObject;
        return;
    }
    else
    {
        tail->setNextPtr(newObject);
        tail = newObject;
    }
}





string List::displayList()
{
    string rec = "";
    
    Node* cur = head;
    
    while (cur != NULL)
    {
        rec.append(cur->getRecord());
        rec.append("\n");
        cur = cur->getNextPtr();
    }
    
    return rec;
}


string List::displayNames()
{
    string rec = "";
    
    Node* cur = head;
    
    while (cur != NULL)
    {
        rec.append(cur->getName());
        rec.append("\n");
        cur = cur->getNextPtr();
    }
    
    return rec;
}



string List::removeHead()
{
    string str = "";
    if (head == NULL)
        str = "List is empty\n";
    else
    {
        str = head-> getRecord();
        Node* cur = head;
        head = head->getNextPtr();
        delete cur;
        
        // Check to see if that was the only node in the list
        if (head == NULL)
            tail = NULL;
    }
    return str;
    
}

#endif // LIST_H


