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

node* previousnode(int index){
	node*node=head;
	for(int i=0;i<index;i++){
		node=node->next;
	}
	return node;
}
void deletespecific(int index){
	/*if(index==0)
{
return deletefirst node();
}
if(index>index)        //write functions for them 
{
return deletelast node();
}*/
	node*current=previousnode(index-1);
	node*temp=current->next;
	current->next=current->next->next;
	current->next->prev=current;
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
	deletespecific(3);
	display();
}
