#include<iostream>
using namespace std;
struct Node
{
	int data;
	Node *prev;
	Node *next;
};
Node *head = nullptr;
Node *last = nullptr;
void insert(int n)
{
	Node *element = new Node;
	element->data = n;
	element->next = nullptr;
	element->prev = nullptr;
	if (head == nullptr && last == nullptr )
	{
		head = element;
		last = element;
	}
	else
	{
		last->next = element;
		element->prev = last;
		last = element;
	}
	head->prev = last;
	last->next = head;
}
void delxnodes(int x)
{
    Node *temp = head;
    if (head == nullptr)
    {
        cout << "List is empty";
        return;
    }
    while (head->data == x)
    {
        Node *xnode = head;
        head = head->next;
        head->prev = last;
        last->next = head;
        delete xnode;
    }
    temp = head->next;
    while (temp != head)
    {
        if (temp->data == x)
        {
            Node *xnode = temp;
            xnode->prev->next = xnode->next;
            xnode->next->prev = xnode->prev;
            if (xnode == last)
            {
                last = xnode->prev;
                last->next = head;
                head->prev = last;
            }
            delete xnode;
        }
        temp = temp->next;
    }
}

void del()
{
	Node *temp = head;
	do
	{ 
	 cout<<temp->data<<endl;
	 temp=temp->next;
	}while(temp!=head);
}
int main()
{
	insert(5);
	insert(5);
	insert(3);
	insert(5);
	insert(3);
	insert(5);
	delxnodes(5);
	del();
}
