#ifndef STACK_H
#define STACK_H

template <typename T>
struct Node {
    T value;
    Node *next;
};

template <typename T>
class Stack {
public:
    Stack();
    void push(T item);
    T peek();
    T pop();
    int getCount();
    void printStack();
    bool isEmpty(); // Added function to check if stack is empty
private:
    int count;
    Node<T> *start;
};

#include "Stack.cpp"

#endif
