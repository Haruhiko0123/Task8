#include <iostream>
#include "Stack.h"

using namespace std;

template <typename T>
Stack<T>::Stack() {
    count = 0;
    start = nullptr;
}

template <typename T>
void Stack<T>::push(T item) {
    Node<T> *newNode = new Node<T>;
    newNode->value = item;

    if (count == 0) {
        start = newNode;
        newNode->next = nullptr;
    } else {
        newNode->next = start;
        start = newNode;
    }
    count++;
}

template <typename T>
void Stack<T>::printStack() {
    Node<T> *p = start;
    while (p) {
        cout << p->value << "\t";
        p = p->next;
    }
    cout << endl;
}

template <typename T>
T Stack<T>::peek() {
    if (start) {
        return start->value;
    } else {
        throw out_of_range("Stack Empty");
    }
}

template <typename T>
T Stack<T>::pop() {
    T result;

    if (count == 0) {
        throw out_of_range("Stack Empty");
    }

    Node<T> *p = start;
    start = p->next;
    result = p->value;
    count--;
    delete p;

    return result;
}

template <typename T>
int Stack<T>::getCount() {
    return count;
}

template <typename T>
bool Stack<T>::isEmpty() {
    return count == 0;
}
