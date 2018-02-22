//
//  Queue.c
//  Queue
//
// Copyright © 2018 Tap. TOUCH. All rights reserved.
// Unauthorized copying, via any medium is strictly prohibited.
// Unless written consent by the author, you are not allowed to
// modify, copy, merge, publish, distribute, sublicense, and/or
// sell copies of this code and/or part of this code.
//
/*************************************************************************
 *
 * Tap. TOUCH.
 * __________________
 *
 *  [2017] - [2018] Tap. TOUCH.
 * Created by Jelani on 18/02/2018.
 *
 * THIS SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED,
 * INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
 * IN NO EVENT SHALL THE AUTHOR OR COPYRIGHT HOLDER BE LIABLE FOR ANY CLAIM, DAMAGES OR
 * OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR USE OR OTHER DEALINGS IN THE SOFTWARE.
 */


#ifndef Queue_h
#define Queue_h

#include "LinkList.h"
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
    
    string back(); // tells us the element at the back of the list without removing it
    
    void clear(); //makes the ADT empty
    
    string displayQueue(); // Displays items in queue
    
    void searchQueue(int number, string first, string last, float score); // searches for element in Queue
    
};

//===========================================================================//
//                   Member functions' definition                            //
//===========================================================================//

int Queue::size() {
    
    
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
    
    
        Listt.deleteAtFront();
    
}


string Queue::front() {
    
   
    return Listt.displayFront();
}

string Queue::back() {
    
    return Listt.displayBack();
}

void Queue::clear() {
    while (Listt.size() != 0) {
        Listt.deleteAtFront();
    }
}
string Queue::displayQueue() {
    
    
    return Listt.displayTheList();
}



#endif /* Queue_hpp */
