#include <iostream>
using namespace std;

struct Node {
    char data;
    Node* next;
};

Node* top = nullptr;

void push(char val) {
    Node* newNode = new Node;
    newNode->data = val;
    newNode->next = top;
    top = newNode;
}

char pop() {
    if (top == nullptr) {
        cout << "Stack Underflow. Cannot pop from the stack." << endl;
        return '\0';
    } else {
        char val = top->data;
        Node* temp = top;
        top = top->next;
        delete temp;
        return val;
    }
}

char stackTop() {
    if (top == nullptr) {
        cout << "Stack is empty." << endl;
        return '\0';
    } else {
        return top->data;
    }
}

int precedence(char oprator) {
    if (oprator == '+' || oprator == '-')
        return 1;

    if (oprator == '*' || oprator == '/')
        return 2;

    if (oprator == '^')
        return 3;

    return 0;
}

string infixToPostfix(string infix) {
    int i = 0;
    string postfix = "";

    while (infix[i] != '\0') {
        if ((infix[i] >= 'a' && infix[i] <= 'z') || (infix[i] >= 'A' && infix[i] <= 'Z')) {
            postfix += infix[i];
            i++;
        } else {
            while (top != nullptr && precedence(infix[i]) <= precedence(stackTop())) {
                postfix += pop();
            }
            push(infix[i]);
            i++;
        }
    }

    while (top != nullptr) {
        postfix += pop();
    }

    cout << "Postfix is: " << postfix << endl;
    return postfix;
}

int main() {
    string infix = "x-y/z-k*d";
    string postfix;
    postfix = infixToPostfix(infix);

    return 0;
}

