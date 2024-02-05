t#include<iostream>
using namespace std;
struct node{
	int data;
	node*next;
};
node*head=nullptr;
node*tail=nullptr;


void insertatfirst(int val){
	node*element=new node;
	element->data=val;

	if(head==nullptr){
		head=element;
		tail=element;
		element->next = head;
		
	}
	else{
		element->next = head;  // Set the new node to point to the current head.
        tail->next = element;  // Update the next of the current tail to the new node.
        head = element; 
        
	}
}
/*void insertatend(int n){
	node*newnode=new node;
	newnode->data=n;
	newnode->next=head;
    tail->next=newnode;
    tail=newnode;
}*/
void insertatspecific(int t,int index){
	node*current=head;//start from head 
	for(int i=1;i<index;i++){
		current=current->next;
		
	}
	node *node2=new node;
	node2->data=t;
    node2->next=current->next;  
    
    current->next=node2;
   
}
void display(){
	node*temp=head;
do {
        cout <<temp->data << " ";
        temp = temp->next;
    }
	 while (temp != head);
	 

    cout << endl;

}
int main(){
	insertatfirst(1);
    insertatfirst(2);
    insertatfirst(3);
    //insertatend(6);
    insertatspecific(9,3);
    display();
    
}
