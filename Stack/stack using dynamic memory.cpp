#include<iostream>
using namespace std;
int top=-1;
int size;
int *stack=nullptr;//very imp make it as a pointer
void push(int value,int size){
	if(top>size-1){
		cout<<"stackoverflow"<<endl;
	}
	else{
		top++;
		stack[top]=value;
		
	}
}
void pop(){
	if(top<-1){
		cout<<"stackunderflow"<<endl;
	}
	else{
	
		cout<<stack[top];
			top--;
		
	}
}
int main(){
	int n;

	cout<<"enter the size of stack"<<endl;
		cin>>n;
		size=n;
	 stack=new int[size];

	int val;
	cout<<"enter the value in stack"<<endl;
	for(int i=0;i<n;i++){
		cin>>val;
		push(val,n);
	}
	pop();
	
}
