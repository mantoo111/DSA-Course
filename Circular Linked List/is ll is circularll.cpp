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
bool iscircular(node*head){
	if (head==nullptr){
		return true;          //when only one node
	}
node*temp=head->next;
while(temp!=nullptr&&temp!=head){//for non circular condition
	temp=temp->next;
	   
}	
if(temp==head){
	return true;
}
return false;
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
	simplelinklist(4);
	simplelinklist(7);
	simplelinklist(8);
	
	simplelinklist(9);
	display();
	if (iscircular(tail)){
		cout<<"list is circular"<<endl;
	}
	else
	cout<<"list is not circular"<<endl;
}
