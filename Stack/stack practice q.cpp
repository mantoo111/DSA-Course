#include<iostream>

using namespace std;
	int	top=-1;
	int arr[3];

void push(int value, int size){
	
	if(top>=size-1){
		cout<<"stackoverflow"<<endl;
	}
	else
	{
		top++;
		arr[top]=value;
		cout<<arr[top];
	}

	
}
int pop(int value) {
    if (top < 0) {
        cout << "Stack underflow" << endl;
        return -1;
    } else {
        int value = arr[top];
        top--;	
        return value;
}
}

int main(){

	int value;
	int size=3;
	cout<<"Enter the number to push in stack"<<endl;
	for(int i=0;i<3;i++){
	
	cin>>value;
	push(value,size);
	
}
	pop(value);
}




