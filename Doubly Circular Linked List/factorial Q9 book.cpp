#include<iostream>
using namespace std;
struct Node1
{
	int data;
	Node1 *prev;
	Node1 *next;
};
struct Node2
{
	int data;
	Node2 *prev;
	Node2 *next;
};
Node1 *head = nullptr;
Node1 *last = nullptr;
Node2 *head1 = nullptr;
Node2 *last1 = nullptr;
void insert(int n)
{
	Node1 *element = new Node1;
	element->data = n;
	element->next = nullptr;
	element->prev = nullptr;
	if(head == nullptr && last == nullptr)
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
void enter(int n) //entering elements in another linked list
{
	Node2 *element = new Node2;
	element->data = n;
	element->next = nullptr;
	element->prev = nullptr;
	if(head1 == nullptr && last1 == nullptr)
	{
		head1 = element;
		last1 = element;
	}
	else
	{
		last1->next = element;
		element->prev = last1;
		last1 = element;
	}
	head1->prev = last1;
	last1->next = head1;
}
void factorial()
{
    Node1 *temp = head;
    do {
        int n = temp->data;
        int f = 1;
        for (int i = 1; i <= n; i++) {
            f = f * i;
        }
        enter(f);
        temp = temp->next;
    } while (temp != head);
}

void delnode1()
{
	Node1 *temp = head;
	do
	{
	    cout<<temp->data<<endl;
		temp = temp->next;	
	}while(temp!=head);	
}
void delnode2()
{
	Node2 *temp = head1;
	do
	{
	    cout<<temp->data<<endl;
		temp = temp->next;	
	}while(temp!=head1);	
}
int main()
{
	int n;
	for(int i=0;i<5;i++)
	{
		cout<<"Enter a number:"<<endl;
		cin>>n;
		insert(n);
	}
	cout<<"Elements of first linked list:"<<endl;
	delnode1();
	factorial();
	cout<<endl;
	cout<<"Elements of 2nd linked list:"<<endl;
	delnode2();
}
