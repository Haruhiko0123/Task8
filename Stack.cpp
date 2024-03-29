#include <iostream>
#include "Stack.h"

using namespace std;


template <typename T> Stack<T>::Stack(){
    count = 0;
    start = NULL;
}

template <typename T> 
void Stack<T>::push(T item){
    node<T>  *newnode = new node<T>;
    newnode->value = item;  

    if (count == 0){
        start = newnode;
        newnode->next = NULL;
    }
    else{
        newnode->next = start;
        start = newnode;
    }
    count ++;
}


template <typename T> 
void Stack<T>::printStack(){
    node<T> *p;
    p = start;
    while (p){
        cout << p->value << "\t";
        p = p->next;
    }
    cout << endl;
}


template <typename T> 
T Stack<T>::peek(){
    if (start){
        return start->value;
    }
    else{
        throw out_of_range("Stack Empty");
    }
}


template <typename T> 
T Stack<T>::pop(){
    T result;

    if (count == 0){
        throw out_of_range("Stack Empty");
    }

    node<T> *p = start;
    start = p->next;
    result = p->value;
    count --;
    delete(p);
    
    return result;
}


template <typename T> 
int Stack<T>::getCount(){
    return count;
}
