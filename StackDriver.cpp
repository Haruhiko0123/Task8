#include <iostream>
#include "Stack.h"

using namespace std;

bool check(const string& expression) {
    Stack<char> stack;
    for (char c : expression) {
        if (c == '(') {
            stack.push(c);
        } else if (c == ')') {
            if (stack.isEmpty()) {
                return false; // Unbalanced parenthesis
            }
            stack.pop();
        }
    }
    return stack.isEmpty(); // If stack is empty, all parentheses are matched
}

int main() {
    string ex1 = "(5 + y) * 3(6x)";
    string ex2 = "(5+ 3)) * 2";
    string ex3 = ")(";

    cout << "Expression 1: " << (check(ex1) ? "Balanced" : "Not Balanced") << endl;
    cout << "Expression 2: " << (check(ex2) ? "Balanced" : "Not Balanced") << endl;
    cout << "Expression 3: " << (check(ex3) ? "Balanced" : "Not Balanced") << endl;

    return 0;
}
