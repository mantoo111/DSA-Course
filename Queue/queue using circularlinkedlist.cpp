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
	
if(rare==nullptr){
	front=rare=element;
	rare->next=front;
	
}
else{
rare->next=element;
rare=element;
rare->next=front;

}
}
void dequeue(){
node*temp=front;
front=front->next;

}
void display(){
node*temp=front;
if(front!=nullptr){
	do{
	
	cout<<temp->data<<"->";
	temp=temp->next;
}
while(temp!=front);{
	cout<<"start";
}
}
}
int main(){
	enqueue(7);
	enqueue(8);
	enqueue(5);
	enqueue(3);
	dequeue();
	display();
	
}


