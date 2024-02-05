#include<iostream>
using namespace std;

struct node{
	int data;
	node*next;
};
node*top=nullptr;
void push(int val){
	node*element =new node;
	element->data=val;
	element->next=top;
	top=element;
}
void pop(){
	node*element=top;
	top=top->next;
	
	cout<<element->data;
}
void display(){
	node*temp=top;
	while(temp!=NULL)
  {   cout<<temp->data<<" ";
   temp=temp->next;
  }
     cout << endl;
}
int main(){
int n;
	for(int i=0;i<4;i++){
		cin>>n;
		push(n);
	}
cout<<"deleted values are"<<endl;	
		pop();
	for(int i=0;i<4;i++){
		display();
	
	}
}
