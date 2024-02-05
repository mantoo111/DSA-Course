#include<iostream>
using namespace std;
struct node{
	int data;
	node*next;
	node*prev;
};
node*head=nullptr;
node*tail=nullptr;
void insert(int n)
{
	node *newnode = new node;
	if (head == nullptr)
	{
		newnode->prev = nullptr;
		newnode->data = n;
		newnode->next = nullptr;
		head = newnode;
	}
	else
	{
		newnode->data = n;
		newnode->next = head;
		head->prev = newnode;
		head = newnode;
	}
}
void insertatposition(int index){
    node* current = head;  // 0 index 
    for (int i = 1; i < index; i++) 
   {
        current = current->next;
    }

    node *element=new node;
    cin>>element->data;
    element->next=current->next;  
    element->prev=current;
    current->next=element;
    element->next->prev=element;

}
void display()
    
{node*temp=head;
	while(temp!=nullptr)
	{
		cout<<temp->data<<endl;
		temp = temp->next;
	}
}


int main(){
	
		insert(4);
		insert(6);
		insert(45);
	
	insertatposition(2);
	display();
}

