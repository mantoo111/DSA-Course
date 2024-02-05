#include <iostream>
using namespace std;

const int MAX_SIZE = 100; 

int top = -1;
char stack[MAX_SIZE];

void push(char val) {
    if (top >= MAX_SIZE - 1) {
        cout << "Stack Overflow Cannot push "<< endl;
    } else {
    	top++;
        stack[top] = val;
    }
}

char pop() {
    if (top <= -1) {
        cout << "Stack Underflow Cannot pop from the stack" << endl;
        return '\0';
    } else {
        return stack[top--];
    }
}

char stackTop() {
    if (top == -1) {
        cout << "Stack is empty" << endl;
        return '\0';
    } else {
        return stack[top];
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

string infixtopostfix(string infix) {
    int i = 0;
    string postfix = "";

    while (infix[i] != '\0') {
        if ((infix[i] >= 'a' && infix[i] <= 'z') || (infix[i] >= 'A' && infix[i] <= 'Z')) {
            postfix += infix[i];
            i++;
        }
	
        
		else {
            while (top >= 0 && precedence(infix[i]) <= precedence(stackTop())) {
                postfix += pop();
            }
            push(infix[i]);
            i++;
        }
    }

    while (top >= 0) {
        postfix += pop();
    }

    cout << "Postfix is : " << postfix; //  infix to postfix converted
    return postfix;
}

int main() {
    string infix = "x-y/z-k*d";
    string postfix;
    postfix = infixtopostfix(infix);

    return 0;
}

