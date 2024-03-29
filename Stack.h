#ifndef _Stack_h
#define _Stack_h

template <typename T>
struct node {
    T value;
    node *next;
};

template <typename T>
class Stack{
    public:
        Stack();
        void push(T item);
        T peek();
        T pop();
        
        int getCount();
        void printStack();
    
    private:
        int count;
        node<T> *start;
};


#include "Stack.cpp"
#endif

