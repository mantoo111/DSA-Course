#include<iostream>
using namespace std;
int arr[4]={8,9,10};
int stack[4];
int top=-1;
void  push(int val){
	if(top>=4){
		cout<<"stack overflow";
}
	else{
		top++;
		stack[top]=val;
		
		}
	}
int pop() {
    if (top < 0) { // Stack is empty
        cout << "Stack underflow" << endl;
        return -1; // Return an invalid value
    } else {
        int val = stack[top];
        top--;
        return val;
    }
}

void reverse(){
	int val;
	for(int i=0;i<4;i++){
	
	val=arr[i];
	push(val);
    
  
}
for (int i = 0; i < 4; i++) {
        arr[i] = pop();
    }
    
     cout << endl;
}
int main(){
reverse();
cout << "Reversed Array: ";
    for (int i = 0; i < 4; i++) {
        cout << arr[i] << " ";
    }
}



