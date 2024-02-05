//inserting at first index:
#include<iostream>
using namespace std;
struct node{
	int data;
	node *next;
};
node*head=nullptr;
node*tail=nullptr;

void insertatfirst(int n){
	node* onenode=new node();
	onenode->data=n;
	onenode->next=head;
	head=onenode;
	
}
void display(){
	node*temp=head;
while(temp != nullptr){
        cout<<temp->data<<" -> ";
        temp=temp->next; 
    }
    cout<<"NULL"<<endl;

		
	}
int main(){

	
	insertatfirst(6);
	insertatfirst(9);
	insertatfirst(67);
	display();
}
