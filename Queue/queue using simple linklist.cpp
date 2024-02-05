#include<iostream>
using namespace std;
struct node{
	int data;
	node*next;
	
};
node*front=nullptr;
node*rare=nullptr;
void enqueue(int val){
node*element=new node;
	element->data=val;
	element->next=nullptr;
if(rare==nullptr){
	front=rare=element;
	
}
else{
element->next=nullptr;
rare->next=element;
rare=element;


}
}
void dequeue(){
	node*temp=front;
	cout<<temp->data;
	temp=temp->next;
	
}
int main(){
	enqueue(7);
	enqueue(8);
	enqueue(5);
	enqueue(3);
	dequeue();
	
}


