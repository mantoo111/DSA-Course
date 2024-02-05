#include<iostream>
using namespace std;
int top=-1;
int arr[10];
void push()
{
	int n;
	cout<<"enter the  value to push in stack"<<endl;
	cin>>n;
	if(top==10){
		cout<<" stack overflow"<<endl;
	}
	else{
		top++;
		arr[top]=n;
	}
}
void pop()
{
	if(top==-1){
		cout<<" stack underflow"<<endl;
	}
	else{
		cout<<"stack top value"<<arr[top];
		top--;
		
	}
}
int main(){
	int option =1;
	while(option!=3){
		cout<<"enter 1 to push,2 to pop and 3 to exit"<<endl;
		cin>>option;
		if(option==1){
			push();
		}
		else if(option==2){
			pop();
		}
		else
		cout<<"you enter wrong number"<<endl;
	}
	return 0;
}
