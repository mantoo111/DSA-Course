#include<iostream>
using namespace std;

struct Node
{
	int data;
	Node *next;
};

struct sorted
{
  int data;
  sorted *next;	
};
Node *head = nullptr;
Node *tail = nullptr;
sorted *headS = nullptr;
sorted *tailS = nullptr;

void sort(int n)
{
    sorted *element = new sorted;
    element->data = n;
    if (headS == nullptr || n < headS->data) {
        element->next = headS;
        headS = element;
    } else {
        sorted *current = headS;
        sorted *prev = nullptr;

        while (current != nullptr && n >= current->data) {
            prev = current;
            current = current->next;
        }

        prev->next = element;
        element->next = current;
    }

    if (element->next == nullptr) {
        tailS = element;
    }
}
void insert(int n)
{
	Node *element = new Node;
	element->data = n;
	element->next = nullptr;
	if (head == nullptr && tail == nullptr)
	{
		head = element;
		tail = element;
	}
	else
	{
		tail->next = element;
		tail = element;
	}
	sort(n);
}
void del()
{
	Node *temp = head;
	cout<<"Unsorted List:"<<endl;
	while(temp!=nullptr)
	{
		cout<<temp->data<<" ";
		temp = temp->next;
	}
}

void display()
{
	sorted *temp = headS;
	if(temp == nullptr)
	{
		return;
	}
	else
	{
	cout<<"Sorted List:"<<endl;
	while(temp!= nullptr)
	{
		cout<<temp->data<<" ";
		temp = temp->next;
	}
   }
}

int main()
{
	int x;
    int	n = 5;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		insert(x);
	}
	del();
	cout<<endl;
	display();
}
