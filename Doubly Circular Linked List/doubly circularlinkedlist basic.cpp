#include<iostream>
using namespace std;
struct node{
	int data;
	node*next;//simple doubly lined list
	node*prev;
};
node*head=nullptr;
node*tail=nullptr;
void insert(int val){
	node*element=new node;
	element->data=val;
	if(head==nullptr){
		head=element;
		tail=element;
		head->next=head;
		head->prev=head;
	}
	else{                           //every time a newnode is added in the list
		tail->next=element;
		element->prev=tail;
		element->next=head;
		head->prev=element;
		tail=element;
	}
}
void display(){
    node *temp=head;
    if(head!=nullptr){
        do{
            cout<<temp->data<<" -> ";
            temp=temp->next;
        }while(temp!=head);
        cout<<"START"<<endl;
    }
}	
int main(){
	insert(3);
	insert(2);
	insert(9);
	display();
}
