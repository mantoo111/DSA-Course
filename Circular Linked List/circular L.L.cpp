#include<iostream>
using namespace std;
struct Node{
	int data;
	Node*next;
};
Node*head=nullptr;
void circular(){
	Node*ptr=head;
	cout<<ptr->data;
	ptr=ptr->next;
	
	while(ptr!=head){
		cout<<ptr->data;
		ptr=ptr->next;
	}
}
int main(){
	
Node *one=new Node;
one->data=4;
one->next=head;
Node *two=new Node;
two->data=6;
one->next=two;

Node *three=new Node;
three->data=7;
three->next=four;


	circular();
	
}

