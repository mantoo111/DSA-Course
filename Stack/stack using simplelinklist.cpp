#include<iostream>
using namespace std;
struct node{
	int data;
	node*next;
};
node*top=nullptr;
//node*head=nullptr;
void push(int n){
	node*head=new node;
	if (top==nullptr){
		head->data=n;
		head->next=nullptr;
		top=head;
	}
	else{
		node*newnode=new node;
		newnode->data=n;
		newnode->next=top;
		top=newnode;
	}
}
void pop(){
	node*temp=top;
	while(temp!=nullptr){
		cout<<temp->data<<"->";
		temp=temp->next;
	}
	cout<<"start"<<endl;
}
int main(){
push(5);
push(8);
push(9);
push(1);
pop();
}
