/*#include<iostream>
using namespace std;
void isempty(int top){
	if(top==-1)
	cout<<"stack is empty"<<endl;
	else
	cout<<"stack is not empty";
	
}

int main(){
	int size;
int	top=-1;
	
	cout<<"enter  the size of array"<<endl;
	cin>>size;
	int *arr=new int[size];
	cout<<"enter the elements "<<endl;
	for(int i=0;i<size;i++){
	
	cin>>arr[i];
	top++;
}
isempty(top);
}
*/
//implementing stack operations i.e push and pop:


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






