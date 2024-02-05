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
node*uniquesortedlist(node*head){
	if(head==nullptr){
		return nullptr;
	}
	node*curr=head;
	while(curr!=nullptr){//cae for duplicate 
		if((curr->next!=nullptr)&&curr->data==curr->next->data){
			node*next_next=curr->next->next;//deleting the link
			node*nodetodel=curr->next;
			delete(nodetodel);
			curr->next=next_next;
		}
		else{//not equal
			curr=curr->next;//moving current one step forward
		}
	}
	return head;
}
void display() {
    node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main(){
	 simplelinklist(1);
    simplelinklist(2);
    simplelinklist(2);
    simplelinklist(3);
display();
uniquesortedlist(head);
display();
}

