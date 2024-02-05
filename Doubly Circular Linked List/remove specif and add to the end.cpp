#include<iostream>//program to remove specific node and addit to the end of double circular linked list;
using namespace std;
struct node{
	int data;
	node*next;
	node*prev;
	
};
int size=0;
node*head=nullptr;
node*tail=nullptr;
int insertatfirst(int val){
	node*newnode=new node;
	newnode->data=val;
	
	if(head==nullptr){
		head=newnode;
		tail=newnode;
		newnode->next=head;
		newnode->prev=tail;
		
	}
	else{
		newnode->next=head;
		head->prev=newnode;
		newnode->prev=tail;
		tail->next=newnode;
		head=newnode;
	}
}
node *previousnode(int index){
	node*temp=head;
	for(int i=0;i<index;i++){
		temp=temp->next;
	}
	return temp;
}

int deletespecificnode(int index){
	
	if(index==0){
		return insertatfirst(45);
		
	}
	else{
	node*current=previousnode(index-1);
	node*temp=current->next;
	current->next=current->next->next;
    current->next->prev=current;
    tail->next = temp;
    temp->prev = tail;
    temp->next = head;
    head->prev = temp;
    tail = temp;
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
	insertatfirst(98);
	deletespecificnode(2);
	display();
	
}
