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

void deletefirst(){
	if(head==nullptr){
		cout<<"list is empty"<<endl;
		
	}
	else{
	
	node*temp=head;
	head=head->next;
	if(head!=nullptr){
		head->prev=tail;
		tail->next=head;
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
	deletefirst();
	display();
	
}
