#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head = nullptr;
Node* tail = nullptr;

void InsertAtBeginning(int data) {
    Node* newNode = new Node;
    newNode->data = data;
    if (head == nullptr) {
        head = newNode;
        newNode->next = newNode;
        tail = newNode;  // Set the tail for the first element
    } else {
        newNode->next = head;
        tail->next = newNode;
        head = newNode;
    }
}

// Function to display the circular linked list.
void Display() {
    if (head == nullptr) {
        std::cout << "List is empty." << std::endl;
        return;
    }

    Node* current = head;
    do {
        std::cout << current->data << " ";
        current = current->next;
    } while (current != head);

    std::cout << std::endl;
}

// Function to delete the head
void deleteFirst() {
    if (head == nullptr) {
        return;
    }
    Node* temp = head;
    head = head->next;
    tail->next = head;
    delete temp;
}

int main() {
    InsertAtBeginning(1);
    InsertAtBeginning(2);
    InsertAtBeginning(3);

    cout << "Circular Linked List after inserting at the beginning: ";
    Display();
    deleteFirst();
    Display();

    return 0;
}

