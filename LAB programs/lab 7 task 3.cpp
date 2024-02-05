#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node* prev;
};

Node* head = nullptr;
Node* tail = nullptr;
int size = 0;

// Function for displaying the linked list
void display() {
    Node* node = head;
    while (node != nullptr) {
        cout << node->data << " -> ";
        node = node->next;
    }
    cout << "NULL" << endl;
}
// Function to insert at first/head
void insertAtFirst(int data) {
    Node* node = new Node;
    node->data = data;
    node->next = head;
    node->prev = nullptr;

    if (head != nullptr) {
        head->prev = node;
    }

    head = node;

    if (tail == nullptr) {
        tail = head;
    }

    size++;
}
//Function to delete first node
int deleteFirstNode() {
    if (head == nullptr) {
        cout << "List is empty. Nothing to delete." << endl;
        return -1; 
    }
    int value = head->data;
    Node* temp=head;
    head = head->next;
    if (head != nullptr) {
        head->prev = nullptr; 
    } else {
        tail = nullptr;
    }
    delete temp;
    size--;
    return value;
}


// Function to delete Last node
int deleteLastNode() {
    if (tail == nullptr) {
        cout << "List is empty. Nothing to delete." << endl;
        return -1; // Return a default value indicating failure
    }
    int value = tail->data;
    Node* temp = tail;
    tail = tail->prev;
    if (tail != nullptr) {
        tail->next = nullptr; // Update the new tail node's next pointer
    } else {
        head = nullptr;
    }
    delete temp;
    size--;
    return value;
}

// For getting previous node we want to delete
Node* get(int index){
    Node* node =head;
    for (int i = 0; i < index; i++)  // i < index because it start from 0  or can be    <= index-1;
    {
        node=node->next; 
    }
    return node;
    
}
int deletePositionedNode(int index) {
    if (index < 0 || index >= size) {
        cout << "Invalid position for deletion." << endl;
        return -1; 
    }

    if (index == 0) {
        return deleteFirstNode();
    }

    if (index == size - 1) {
        return deleteLastNode();
    }

    Node* current = get(index-1);
    int value = current->next->data;
    Node *temp=current->next;
    current->next = current->next->next;
    current->next->prev = current; 
    delete temp;
    size--;

    return value;
}

int main(){
	insertAtFirst(6);
    insertAtFirst(65);
    insertAtFirst(22);
    insertAtFirst(4);
    display();
	
	cout << "\nDeleting first---------\n";
    cout<<"The value deleted is: "<<deleteFirstNode()<<endl;
    display();

    cout << "\nDeleting last-----------\n";
    cout <<"The element deleted is: "<< deleteLastNode()<<endl;
    display();

    cout << "\nDeleting specific item from index------\n";
    cout <<"Element deleted is : "<< deletePositionedNode(2) << "\n";
    display();
    }

