#include <iostream>
#include "LinkedList.h"
#include "Stack.h"
#include "Queue.h"
#include "BST.h"

using namespace std;

void linkedListDemo() {
    cout << "\n=== Linked List Demo ===" << endl;
    LinkedList list;
    
    list.insertAtEnd(10);
    list.insertAtEnd(20);
    list.insertAtBeginning(5);
    list.insertAtEnd(30);
    
    cout << "Linked List: ";
    list.display();
    
    cout << "Search 20: " << (list.search(20) ? "Found" : "Not Found") << endl;
    cout << "Length: " << list.getLength() << endl;
    
    list.deleteNode(20);
    cout << "After deleting 20: ";
    list.display();
}

void stackDemo() {
    cout << "\n=== Stack Demo ===" << endl;
    Stack stack;
    
    stack.push(10);
    stack.push(20);
    stack.push(30);
    
    cout << "Top element: " << stack.peek() << endl;
    cout << "Popped: " << stack.pop() << endl;
    cout << "Top element after pop: " << stack.peek() << endl;
}

int main() {
    cout << "Data Structures Implementation Demo" << endl;
    cout << "===================================" << endl;
    
    linkedListDemo();
    stackDemo();
    
    return 0;
}
