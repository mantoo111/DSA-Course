#include<iostream>
using namespace std;
struct Node
{
	int data;
	Node *next;
};
Node *head = nullptr;
Node *top = nullptr;
void push(int n)
{
	Node *element = new Node;
	element->data = n;
	if (top == nullptr)
	{
		head = element;
		
		head->next = nullptr;
		
		top=head;
	
	}
	else
	{
		Node *newelement = new Node;
        newelement->data = n;
        element->next = top;//creating link with the previous node
        top = element;
	}
}
void pop()
{Node *current=top;
	while(current!=nullptr)
	{
		cout<<current->data;
		current = current->next;
	}
}
int main()
{
	int n,x;
	cout<<"Enter the number of values you want to enter:"<<endl;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"Enter your values: ";
		cin>>x;
		push(x);
	}
	pop();
	
}
