#include<iostream>
using namespace std;
struct node{
	int data;
	node*next;
};
node*head=nullptr;
node*tail=nullptr;
void circularlinklist(int val){
	node*element=new node;
	element->data=val;
	if(head==nullptr){
		head=element;
		tail=element;
		head->next=head;
		
	}
	else{
	node*newnode=new node;
	newnode->data=val;
	newnode->next=head;
	tail->next=newnode;
	tail=newnode;
	}
}
    
void display(){
	int result;
	node*temp=head;
if(temp == nullptr){
	cout<<"list is empty"<<endl;
}
do{

      int  result=temp->data;
        if(result%2==0)
        cout<<"even values"<<temp->data<<endl;
        else
        cout<<"odd value"<<temp->data<<endl;
        temp=temp->next; 
    }
    while(temp!=head);{
	
    cout<<"NULL"<<endl;
}
		
	}

int main(){
	int n;
	for(int i=0;i<5;i++){
		cin>>n;
		circularlinklist(n);
	}
	
	display();
}
