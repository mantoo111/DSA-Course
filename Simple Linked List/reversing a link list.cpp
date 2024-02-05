#include<iostream>
using namespace std;
struct node{
	int data;
	node*next;
};
node*head=nullptr;
node*tail=nullptr;
void simplelinklist(int val){
	node*element=new node;
	element->data=val;
	if(head==nullptr){
		head=element;
		tail=element;
		
	}
	else{
	node*newnode=new node;
	newnode->data=val;
	newnode->next=nullptr;
	tail->next=newnode;
	tail=newnode;
	}
}

node*reverselinklist(node*head){
	if(head==nullptr||head->next==nullptr){
		return head;//case for empty
	}
	node*prev=nullptr;
	node*current=head;
	node*forward=nullptr;//here forward is created to point to the link list that come after head 3->|forward points5->7
	while(current!=nullptr){
		forward=current->next;
		current->next=prev;//here current next mean point to zerooor nullptr
		prev=current;
		current=forward;
	}
	return prev;
}
void display() {
    node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main() {
    // Example usage
    simplelinklist(1);
    simplelinklist(2);
    simplelinklist(3);

    cout << "Original list: ";
    display();

    head = reverselinklist(head);

    cout << "Reversed list: ";
    display();

    return 0;
}
/*n the reverselinklist function, the head is passed as an argument because it needs to reverse the linked list starting from the specified head. The function takes the head of the linked list as a parameter and then modifies the links between nodes to reverse the order of the list.*?
