#include<iostream>
using namespace std;
struct node{
	int data;
	node*next;
};
node*head=nullptr;
node*tail=nullptr;
void insert(int val){
	node*element=new node;
	element->data=val;
	element->next=nullptr;
	if(head==nullptr){
		head=tail=element;
}
	else{
		tail->next=element;
		tail=element;
		
	}
}
	 
void display(){
	node*temp=head;
while(temp != nullptr){
        cout<<temp->data<<" -> ";
        temp=temp->next; 
    }
    cout<<"NULL"<<endl;

		
	}
void bubblesort(){
	for(node *i=head;i!=nullptr;i=i->next){
		for(node*j=head;j!=nullptr&&j->next!=nullptr;j=j->next){
			if(j->data>j->next->data){
				int temp=j->data;
				j->data=j->next->data;
				j->next->data=temp;
			}
		}
	}
}
int main(){
	
		insert(4);
		insert(78);
		insert(47);
		insert(1);
		insert(674);
		bubblesort();
		display();
		
	}
