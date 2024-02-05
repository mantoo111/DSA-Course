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
		newnode->next=nullptr;
		newnode->prev=tail;
		tail->next=newnode;
	
		tail=newnode;
		
		
	}
}
void insertatspecific(int val,int index){
	node*current=head;
	for(int i=1;i<index;i++){
		current=current->next;
	}
	node*insertnode=new node;
	insertnode->data=val;
	insertnode->next=current->next;
	insertnode->prev=current;
	current->next=insertnode;
	current->next->prev=insertnode;
	
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
	insertatspecific(56,2);
	display();
}
