#include<iostream>
using namespace std;
struct node{
	int data;
	node*next;
	node*previous;
	
};
node*head=nullptr;
node*tail=nullptr;
void insertatfist(){
	node*element=new node;
	cin>>element->data;
	element->next=head;
	element->previous=nullptr;
	if(head!=nullptr){
		head->previous=element;
	
	}
		head=element;
}
void delfist(){
	node*temp=head;
	head=head->next;
	if(head!=nullptr){
		head->prev=nullptr;
	}
}
int main(){
	insertatfist();
}
