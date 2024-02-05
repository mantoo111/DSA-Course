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

// Function to insert at last/tail
void insertAtLast(int data) {
    if (tail == nullptr) {
        insertAtFirst(data);
        return;
    }

    Node* node = new Node;
    node->data = data;
    tail->next = node;
    node->prev = tail;
    tail = node;

    size++;
}

// Function to insert at a position
void insertAtPosition(int data, int index) {
    if (index < 0 || index > size) {
        cout << "Invalid position for insertion." << endl;
        return;
    }

    if (index == 0) {
        insertAtFirst(data);
        return;
    }

    if (index == size) {
        insertAtLast(data);
        return;
    }

    Node* current = head;  // 0 index
    for (int i = 1; i < index; i++) {
        current = current->next;
    }

    Node* node = new Node;
    node->data = data;
    node->next = current->next;
    node->prev = current;
    current->next = node;
    current->next->prev = node;

    size++;
}

int main() {
    cout << "Insertion at first index--------" << std::endl;
    insertAtFirst(6);
    insertAtFirst(65);
    insertAtFirst(22);
    insertAtFirst(4);
    display();

    cout << "\nInsertion at last index--------" << std::endl;
    insertAtLast(44);
    display();

    cout << "\nInsertion at specific index--------\n";
    insertAtPosition(100, 3);
    display();

    return 0;
}

