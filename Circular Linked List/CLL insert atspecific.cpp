#include<iostream>
using namespace std;
struct node{
	int data;
	node*next;
	
};
node*head=nullptr;
node*tail=nullptr;
void insertatfirst(){
	node*element=new node;
	cin>>element->data;
if(head==nullptr){
	head=element;
	tail=element;
	element->next=nullptr;
}
else {
        element->next = head;
        head = element;
    }
	
}
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
node*previous(int index){
	node*temp=head;
	for(int i=0;i<index;i++){
		temp=temp->next;
	
	}
		return temp;
}
void deletespecific(int index){
	node*current=previous(index-1);
	node*temp=current->next;
	current->next=current->next->next;
	current->next=current->next;
}
void display(){
	node*temp=head;
	while(temp!=nullptr){
		cout<<temp->data;
		temp=temp->next;
	}
}
int main(){
	for(int i=0;i<3;i++){
		
	
	insertatfirst();

}
//insertatspecific(6,2);
 deletespecific(1);
	display();

}
