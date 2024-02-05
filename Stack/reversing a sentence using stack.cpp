#include<iostream>
using namespace std;
const int MAX_SIZE = 100; // Define the maximum size of the stack
int top = -1;
string stack[MAX_SIZE]; // Use an array of strings to store words

void push(string word) {
    if (top < MAX_SIZE - 1) {
        top++;
        stack[top] = word;
    } else {
        cout << "Stack is full. Cannot push " << word << endl;
    }
}

void pop() {
    if (top >= 0) {
        cout << stack[top] << " ";
        top--;
    } else {
        cout << "Stack is empty." << endl;
    }
}
void reversesentence(string s){
	for(int i=0;i<s.length();i++){
		string word="";
		while(s[i]!=' '&&i<s.length())
		{
			word+=s[i];
		i++;
		}
		push(word);
	}
	while(top!=-1){
			pop();
		cout<<s[top];
	
	}cout<<endl;
}
int main(){
string s="Hey, how are you doing?";
reversesentence(s);
}
//or can be done through
/*
const int MAX_SIZE = 100; // Define the maximum size of the stack
int top = -1;
string stack[MAX_SIZE]; // Use an array of strings to store words

void push(string word) {
    if (top < MAX_SIZE - 1) {
        top++;
        stack[top] = word;
    } else {
        cout << "Stack is full. Cannot push " << word << endl;
    }
}

void pop() {
    if (top >= 0) {
        cout << stack[top] << " ";
        top--;
    } else {
        cout << "Stack is empty." << endl;
    }
}

void reversesentence(string s) {
    string word = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != ' ') {
            word += s[i];
        } else {
            push(word);
            word = "";
        }
    }
    push(word); // Push the last word

    while (top != -1) {
        pop();
    }
    cout << endl;
}

int main() {
    string s = "Hey, how are you doing?";
    reversesentence(s);
    return 0;
}


*/
