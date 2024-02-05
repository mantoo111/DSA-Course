#include<iostream>
using namespace std;
struct node{
	int data;
	node *ptr;
};

node* start= nullptr;
node* current=nullptr;


void insert(){
	if(start==nullptr){
		start=new node;
		cin>>start->data;
		start->ptr=nullptr;
		
		
}
else{
	current=start;

	while(current->ptr!=nullptr){
		current=current->ptr;
	}	
		node*temp=new node;
		 cin>>temp->data;
		 temp->ptr=nullptr;
		 current->ptr=temp;
	}
}
void display(){
	node*temp=start;
	while(temp!=nullptr){
		
			cout<<temp->data<<"->";
			temp=temp->ptr;
		}
		cout<<"null"<<endl;
	}
int main(){             
	for(int i=0;i<2;i++){
		insert();
	}
	display();
}

