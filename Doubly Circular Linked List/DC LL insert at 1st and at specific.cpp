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
		newnode->prev=tail;
		newnode->next=head;
		
	}
	else{
		node*ne=new node;
	ne->data=val;
		ne->next=head;
		head->prev=ne;
		ne->prev=tail;
		tail->next=ne;
		head=ne;
	}
}
void insertatend(int val){
	node*ele=new node;
	ele->data=val;
	
	if(head==nullptr){
		head=ele;
		tail=ele;
		ele->next=head;
		ele->prev=tail;
		
	}
	else{
		ele->prev=tail;
		tail->next=ele;
		ele->next=head;
		head->prev=ele;
		tail=ele;
	}
}
void insertatspecificindex(int t,int index){
	if(index==0){
		insertatfirst(2);
		
	}
	else{
		node*current=head;
		for(int i=1;i<index;i++){
			current=current->next;
		}
		node*node2=new node;
		node2->data=t;
		node2->prev=current;
		node2->next=current->next;
		current->next->prev=node2;
		current->next=node2;
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
	insertatend(59);
	insertatspecificindex(45,2);
	display();
	
}
