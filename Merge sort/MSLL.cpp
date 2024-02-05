#include<iostream>
using namespace std;
int n = 6;

//base structure
struct Node {
    int data;
    Node* next;
};

// Inheritance nodes from base
struct A : public Node {};
struct B : public Node {};
struct C : public Node {};
Node* headA = nullptr;
Node* tailA = nullptr;
Node* headB = nullptr;
Node* tailB = nullptr;
Node* headC = nullptr;
Node* tailC = nullptr;

void insert(Node*& head, Node*& tail, int n) {
    Node* element = new Node;
    element->data = n;
    element->next = nullptr;
    if (head == nullptr && tail == nullptr) {
        head = element;
        tail = element;
    } else {
        tail->next = element;
        tail = element;
    }
}
void divide(Node *head)
{
	int mid = (0+n)/2;
	Node *temp = head;
	for(int i=0;i<=mid;i++)
	{
		insert(headB,tailB,temp->data);
		temp = temp->next;
	}
	while(temp!=nullptr)
	{
		insert(headC,tailC,temp->data);
		temp = temp->next;
	}
}
//bubble sort
void sort(Node* head) {
    for (Node* i = head; i != nullptr; i = i->next) {
        for (Node* j = head; j != nullptr && j->next != nullptr; j = j->next) {
            if (j->data > j->next->data) {
                int temp = j->data;
                j->data = j->next->data;
                j->next->data = temp;
            }
        }
    }
}

void mergesort(Node *head, Node *h)
{
	Node *i = head;
	Node *j = h;
	headA = nullptr;
	tailA = nullptr;
	while(i!=nullptr && j!=nullptr)
	{
		if(i->data < j->data)
		{
			insert(headA,tailA,i->data);
			i = i->next;
		}
		else
		{
			insert(headA,tailA,j->data);
			j = j->next;
		}
	}
	if(i==nullptr)
	{
		while(j!=nullptr)
		{
			insert(headA,tailA,j->data);
			j = j->next;
		}
	}
	else
	{
		while(i!=nullptr)
		{
			insert(headA,tailA,i->data);
			i = i->next;
		}
	}
	
}
void display(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {

    int n, n1;
    for (int i = 0; i < 6; i++) {
        cout << "Enter a value for A linked list:" << endl;
        cin >> n;
        insert(headA, tailA, n);
    }
    divide(headA);
    sort(headB);
    sort(headC);
    mergesort(headB,headC);
    cout<<"After sorting the elements: ";
    display(headA);
    return 0;
}

