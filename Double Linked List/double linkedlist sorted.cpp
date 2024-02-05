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


void sort(){


node* current = head;
    node* index = nullptr;

    while (current != nullptr) {
        index = current->next;

        while (index != nullptr) {
            if (current->data > index->data) {
                // Swap data
                int temp = current->data;
                current->data = index->data;
                index->data = temp;
            }

            index = index->next;
        }

        current = current->next;
    }
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
	
		insert(6);
		insert(3);
		insert(45);
		insert(5);
	
	
	display();
}

