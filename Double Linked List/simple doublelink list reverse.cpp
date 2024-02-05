#include<iostream>
using namespace std;
struct node{
	int data;
	node*next;
	node*prev;
	
};
node*head=nullptr;
node*tail=nullptr;
void doublelinklist(int val){
	node*element=new node;
	element->data=val;
	if(head==nullptr){
		head=element;
		tail=element;
		head->next=nullptr;
		head->prev=nullptr;
		
	}
	else{
		
		
		
		node*newnode=new node;
		newnode->data=val;
		newnode->next=head;
		newnode->prev=nullptr;
		head->prev=newnode;
		head=newnode;
	/*	node*newnode=new node;
		newnode->data=val;
		newnode->next=nullptr;
		newnode->prev=tail;
		tail->next=newnode;
	
		tail=newnode;*/
		
		
	}
}
void display(){
	node*temp=head;
	while(temp!=nullptr){
		
			cout<<temp->data<<"->";
			temp=temp->next;
		}
		cout<<"null"<<endl;
	}
int main(){
	doublelinklist(4);
	doublelinklist(5);
	doublelinklist(46);
	doublelinklist(48);
	display();
}
