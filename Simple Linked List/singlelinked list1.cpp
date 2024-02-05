#include<iostream>
using namespace std;
struct node{
	int data;
	node*next;
};
node*head=nullptr;
node*tail=nullptr;


void inserting(int n){
	node* onenode =new node;
	onenode->data=n;
    onenode->next=nullptr;
    head=onenode;
    if(tail==nullptr){
        tail=head; 
    }
    

	
	//for displaying :
 node *temp= head;   // taking temp because otherwise it will change internal working of head  in this copy (temp) is set to head and moving one step forward
    while(temp != nullptr){
        cout<<temp->data<<" -> ";
        temp=temp->next; 
    }

    cout<<"NULL"<<endl;
}
int main(){
	cout<<"enter the value to insert in single linked list";
	int val;
	for(int i=0;i<15;i++){
		cin>>val;
		inserting(val);
	}
}
