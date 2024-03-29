#include<iostream>
#include "Stack.h"

using namespace std;

int main(){

    Stack<int> s;
    int num;

    for (int i = 0; i < 5; i ++){
        s.push(i);
    }
    s.printStack();
    s.pop();
    s.pop();
    s.printStack();    
    cout << "Expecting  2,1 0" <<endl;

    s.push(5);
    s.push(6);
    cout << s.peek() <<endl;

    while (s.getCount() > 0){
        num = s.pop();
        cout << num  <<endl;
    }
    
    cout << s.peek() <<endl;
    return 0;
}