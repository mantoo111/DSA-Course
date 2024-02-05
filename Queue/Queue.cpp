#include<iostream>
using namespace std;
struct Node
{
	int data;
	Node *next;
};
Node *front = nullptr;
Node *rear = nullptr;
void insert(int n)
{
	Node *element = new Node;
    element->data = n;
    element->next = nullptr;

    if (rear == nullptr && front == nullptr)
    {
        rear = element;
        front = element;
    }
    else
    {
        rear->next = element;
        rear = element;
    }
}
void del()
{
	while(front!=nullptr)
	{
		cout<<front->data;
		front = front->next;
	}
}
int main()
{
	int n,x;
	cout<<"Enter the number of values you want to enter in a queue:";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"Enter the values you want to enter in queue:";
		cin>>x;
		insert(x);
	}
	del();
	return 0;
}
