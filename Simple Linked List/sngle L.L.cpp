#include<iostream>
using namespace std;
class Node{
	public:
		int data;
		Node*next;
		//constructure
	Node(int data){
		this->data =data;
		this->next=	NULL;
	}
		
};
InsertAtHead(Node*&head,int d){//we dont want to make copy we just want to make changes in the orignal one so we use &
	//new node create
	Node*temp=new Node(d);//creating a new node and making it as head
	temp->next=head;
	head=temp;
}
void print(Node*&head){
	Node*temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}
int main(){
	Node* node1=new Node(23);
	cout<<node1->data<<endl;
	cout<<node1->next<<endl;
	//head pointed to node1;
	Node*head=node1;
	print(head);
	InsertAtHead(head ,12);
	print(head);
}
