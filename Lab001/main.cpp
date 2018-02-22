//
//  main.cpp
//  Lab001
//
//
//
// Copyright © 2018 Tap. TOUCH. All rights reserved.
// Unauthorized copying, via any medium is strictly prohibited.
// Unless written consent by the author, you are not allowed to
// modify, copy, merge, publish, distribute, sublicense, and/or
// sell copies of this code.
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


#include <iostream>
#include "Queue.h"
#include "stack.h"
#include "deque.h"
#include "pQueue.h"

using namespace std;

int main() {
    // insert code here...
    cout << "Hello, World!\n";
    
    //List* list = new List();
    Queue q;
    stack theStack;
    Deque DQ;
    PQueue thePQ;
    
    cout << "This is the Priority Queue: " << endl;
    thePQ.push_back(80, "Bill", "Gates", 3.5);
    thePQ.push_back(101, "Steve", "Jobs", 4.0);
    thePQ.push_back(58, "Mark", "Zuckerberg", 2.5);
    thePQ.push_back(43, "Evan", "Spiegel", 2.5);
    thePQ.push_back(79, "Tim", "Cook", 3.5);
    cout << thePQ.display() << endl;
    cout << "The size of the Priority Queue is: " << thePQ.Size() << endl;
    
    cout << "Now we pop from the Priority Queue: " << endl;
    thePQ.pop_front();
    cout << thePQ.display() << endl;
    thePQ.pop_front();
    cout << thePQ.display() << endl;
    cout << "And now we clear" << endl;
    
    thePQ.clear();
    thePQ.display();
    cout << endl;
    
    cout << "This is the Queue: " << endl;
    q.enqueue(1999, "Thomas", "Grant", 3.2);
    q.enqueue(1001, "Timothy", "Gooly", 5.0);
    q.enqueue(1919, "Kevin", "Hart", 4.0);
    q.enqueue(2, "Dave", "Chapelle", 0.8);
    q.displayQueue();
    cout << endl;
    cout << "The size of the Queue is: " << q.size() << endl;
    q.searchQueue(2, "Dave", "Chapelle", 0.8);
    cout << "The back of the Queue is: " << q.back() << endl;
    cout << "And the front of the Queue is: " << q.front() << endl;
    cout << "Now we pop from the Queue: " << endl;
    q.dequeue();
    cout << q.displayQueue() << endl;
    q.dequeue();
    cout << q.displayQueue() << endl;
    q.clear();
    q.displayQueue();
    cout << endl;
    
    cout << "Here is a Stack: " << endl;
    
    theStack.push(10, "Zlatan", "Ibrahimovic", 3.2);
    theStack.push(7, "Alexis", "Sanchez", 4.0);
    theStack.push(6, "Paul", "Pogba", 5.0);
    theStack.push(10, "Lionel", "Messi", 5.0);
    theStack.push(7, "Cristiano", "Ronaldo", 5.0);
    theStack.displayStack();
    theStack.top();
    cout << "We pop the top: " << endl;
    theStack.pop();
    theStack.searchStack(7, "Alexis", "Sanchez", 4.0);
    theStack.top();
    theStack.displayStack();
    cout << "Now we clear the stack" << endl;
    theStack.clear();
    theStack.displayStack();
    cout << endl;
    
    
    cout << "Here is the Deque: " << endl;
    DQ.push_back(13, "James", "Harden", 3.5);
    DQ.push_back(13, "Paul", "George", 3.2);
    DQ.push_back(23, "LeBron", "James", 4.0);
    DQ.push_front(0, "Russel", "Westbrook", 4.0);
    DQ.push_front(35, "Kevin", "Durant", 0.9);
    cout << DQ.display() << endl;
    DQ.begin();
    DQ.pop_back();
    DQ.pop_front();
    DQ.insert(30, "Stephan", "Curry", 1.5, 2);
    DQ.begin();
    DQ.end();
    DQ.Size();
    DQ.display();
    cout << endl;
    
    return 0;
}
