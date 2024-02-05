#include<iostream>
#include<string.h>
using namespace std;
struct Node
{
	string name;
	string address;
	int age;
	int phone;
	Node *next;
	Node *prev;
};
Node *head = nullptr;
Node *last = nullptr;
void insert(string n,string add,int a,int ph)
{
	Node *element = new Node;
	element->name = n;
	element->age = a;
	element->phone = ph;
	element->address = add;
	element->next = nullptr;
	element->prev = nullptr;
	if(head == nullptr &&  last == nullptr )
	{
		head = element;
		last = element;
	}
	else
	{
		last->next = element;
		element->next = last;
		last = element;
	}
	head->prev = last;
	last->next = head;
}
void del()
{
	Node *temp = head;
	do
	{
		cout<<temp->name<<endl;
		cout<<temp->address<<endl;
		cout<<temp->age<<endl;
		cout<<temp->phone<<endl;
		cout<<endl;
		temp = temp->next;
	}while(temp!=head);}
int main()
{
string name,address;
int age,phone;
	for(int i=0;i<2;i++)
	{
		cout<<"Enter name:"<<endl;
		getline(cin,name);
		cout<<"Enter address:"<<endl;
		getline(cin,address);
		cout<<"Enter age:"<<endl;
		cin>>age;
		cout<<"Enter phone:"<<endl;
		cin>>phone;
		cin.ignore();
		insert(name,address,age,phone);
	}
	del();
}
