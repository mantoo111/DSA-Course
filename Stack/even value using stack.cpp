#include <iostream>
using namespace std;

const int SIZE = 6; 

int top = -1;
int stack[SIZE];

void push(int val) {
    if (top >= SIZE - 1) {
        cout << "Stack Overflow  "<< endl;
    } else {
    	top++;
        stack[top] = val;
    }
}

int pop() {
    if (top <= -1) {
        cout << "Stack Underflow" << endl;
        return -1;
    } else {
    	
    	int val = stack[top];
        top--;
        return val;
    	
    }
}
int main(){
	int val;
	for(int i=0;i<6;i++){
		cin>>val;
		push(val);}
	for(int i=0;i<6;i++){
	
	int poped=	pop();
	if(poped%2==0){
    cout<<"even poped number are"<<poped;
		}
         	
}
}
