#include<iostream>
using namespace std;
const int size=10;
int stack[size];
int top=-1;
void push(int val){
if(top>=size-1){
	cout<<"stackoverflow"<<endl;
	
}
else
top++;
stack[top]=val;
cout<<stack[top];
}

int main(){
	//int ar[4]={1,2,3};
	int val=8;
	push(val);
}
