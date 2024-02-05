#include<iostream>
using namespace std;
struct node{
	int data;
	node*next;
};
node*head=nullptr;
node*tail=nullptr;
void insertatend(int val){
	node*element=new node;
	element->data=val;
	if(head==nullptr){
		head=tail=element;
		tail->next=head;
	}
	else{
		tail->next=element;
		tail=element;
		tail->next=head;
		
	}
}
display(){
	 node *temp=head;
    if(head!=nullptr){
        do{
            cout<<temp->data<<" -> ";
            temp=temp->next;
        }while(temp!=head);
        cout<<"START"<<endl;
    }
}
int main(){
	insertatend(4);
	insertatend(6);
	insertatend(46);
	insertatend(478);
	display();
}
