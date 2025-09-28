#ifndef STACK_H
#define STACK_H

#define MAX_SIZE 100

class Stack {
private:
    int arr[MAX_SIZE];
    int top;
public:
    Stack();
    bool push(int x);
    int pop();
    int peek();
    bool isEmpty();
    bool isFull();
};

#endif
