#include<iostream>
using namespace std;
struct node{
	int data;
	node*next;
};
node*head=nullptr;
node*tail=nullptr;
void simplelinklist(int val){
	node*element=new node;
	element->data=val;
	if(head==nullptr){
		head=element;
		tail=element;
		
	}
	else{
	node*newnode=new node;
	newnode->data=val;
	newnode->next=nullptr;
	tail->next=newnode;
	tail=newnode;
	}
}
node*kreverse(node*head,int k){
	if(head==nullptr){
		return nullptr;
		
	}
	node*nextptr=nullptr;
	node*current=head;
	node*prev=nullptr;
	int count=0;
	while(current!=nullptr&&count<k){
		nextptr=current->next;
		current->next=prev;
		prev=current;
		current=nextptr;
		count++;
	}
	if(nextptr!=nullptr){
		head->next=kreverse(nextptr,k);
	}
	return prev;
}
void display() {
    node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main(){
	simplelinklist(1);
    simplelinklist(2);
    simplelinklist(3);
    display();
	head=kreverse(head,2);
	display();
}
