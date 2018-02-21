//
//  LinkList.hpp
//  Queue
//
//  Created by Jelani on 12/02/2018.
//  Copyright © 2018 Tap. TOUCH. All rights reserved.
//

#ifndef LinkList_h
#define LinkList_h

#include <iostream>
#include "Node.h"


using namespace std;

class LinkList {
    
private:
    Node *front, *back;
    int num_elements;
  
public:
    void createANode(int number, string first, string last, float score);
    void createABackNode(int number, string first, string last, float score);
    void addAtBack(int number, string first, string last, float score);
    void addAtFront(int number, string first, string last, float score);
    void insertAtPosition(int number, string first, string last, float score, int atPos);
    string displayBack();
    string displayFront();
    void deleteAtFront();
    void deleteAtBack();
    string displayTheList();
    void searchList(int number, string first, string last, float score);
    
    LinkList() {
        front = nullptr;
        back = nullptr;
        num_elements = 0;
    }
    
    ~LinkList();
    
    int size();
    bool isEmpty();
};

#endif /* LinkList_hpp */
