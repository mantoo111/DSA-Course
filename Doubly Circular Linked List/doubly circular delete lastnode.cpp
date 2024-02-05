#include<iostream>
using namespace std;
struct node{
	int data;
	node*next;
	node*prev;
	
};

node*head=nullptr;
node*tail=nullptr;
void insertatfirst(int val){
	node*newnode=new node;
	newnode->data=val;
	
	if(head==nullptr){
		head=newnode;
		tail=newnode;
		newnode->next=head;
		newnode->prev=tail;
		
	}
	else{
		newnode->next=head;
		head->prev=newnode;
		newnode->prev=tail;
		tail->next=newnode;
		head=newnode;
	}
}

void deletelast(){
	if(tail==nullptr){
		cout<<"list is empty,nothing to del"<<endl;
		
	}
	else{
	
	node*temp=tail;
	tail=tail->prev;
	if(tail!=nullptr){
		tail->next=head;
		head->next=tail;
	}
}
}
void display(){
	node*temp=head;
if(head!=nullptr){
        do{
            cout<<temp->data<<" -> ";
            temp=temp->next;
        }while(temp!=head);
        cout<<"START"<<endl;
    }
}	

int main(){
	insertatfirst(5);
	insertatfirst(2);
	insertatfirst(58);
	deletelast();
	display();
	
}
