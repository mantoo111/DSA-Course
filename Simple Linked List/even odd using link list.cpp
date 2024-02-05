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
    
void display(){
	int result;
	node*temp=head;
while(temp != nullptr){
        result=temp->data;
        if(result%2==0)
        cout<<"even values"<<temp->data<<endl;
        else
        cout<<"odd value"<<temp->data<<endl;
        temp=temp->next; 
    }
    cout<<"NULL"<<endl;

		
	}

int main(){
	int n;
	for(int i=0;i<5;i++){
		cin>>n;
		simplelinklist(n);
	}
	
	display();
}
