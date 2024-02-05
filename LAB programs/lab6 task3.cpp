#include<iostream>
using namespace std;
struct node{
	int data;
	node*next;
};
node*head=nullptr;
node*tail=nullptr;
void circularlinklist(int val) {
    node* element = new node;
    element->data = val;

    if (head == nullptr) {
        head = element;
        tail = element;
        tail->next = head;
    } else {
        
        element->next = head; // Set the new node's next to the current head
        tail->next = element; // Update the tail's next to the new node
        head =element;       // Set the new node as the new head
    }
}
void display(){
	node*temp=head;
	//while(temp!=nullptr){
int result=temp->data;
if(result%2==0)
    cout<<"even values"<<temp->data<<endl;
    else
        cout<<"odd value"<<temp->data<<endl;
        temp=temp->next; 
    
    cout<<"NULL"<<endl;
}
	


int main(){
	int n;
	for(int i=0;i<5;i++){
		cin>>n;
		circularlinklist(n);
	}
	
	display();
}
