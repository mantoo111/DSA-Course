#include<iostream>

using namespace std;
class TwoStack{
	int *arr;
	int top1;
	int top2;
	int size;

public:
	TwoStack(int s){
		this->size=s;
		top1=-1;
		top2=s;
		arr=new int [s];
	}
	void push1(int num){
		//atleast one space is present
		if(top2-top1>1){
			top1++;
			arr[top1]=num;
		}
		else{
			cout<<"stack overflow";
		}
	}
	void push2(int num){
		//atleast one space is present
		if(top2-top1>1){
			top2--;
			arr[top2]=num;
		}
		else{
			cout<<"stack overflow";
		}
	}
	int pop1(){
		if(top1>=0){
			int ans=arr[top1];
			top1--;
			return ans;
		}
		else{
		
		return -1;
	}
}
	int pop2(){
		
		if(top2<size){
			int ans=arr[top2];
			top2++;
			return ans;
		}
		else{
		cout << "Stack 2 is empty\n";
		return -1;
	}
		
	}
};
int main() {
    TwoStack ts(5);

    ts.push1(5);
    ts.push2(10);
    ts.push2(15);
    ts.push1(11);
    ts.push2(7);

    cout << "Popped element from stack 1: " << ts.pop1() << endl;
    ts.push2(40);
    cout << "Popped element from stack 2: " << ts.pop2() << endl;

    return 0;
}	
