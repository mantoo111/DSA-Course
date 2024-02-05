#include<iostream>
using namespace std;

struct node {
    int data;
    node* next;
};

node* head = nullptr;
node* tail = nullptr;

void simplelinklist(int val) {
    node* element = new node;
    element->data = val;
    if (head == nullptr) {
        head = element;
        tail = element;
    }
    else {
        node* newnode = new node;
        newnode->data = val;
        newnode->next = nullptr;
        tail->next = newnode;
        tail = newnode;
    }
}

void printList(node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

void sortedinsert(node*& sorted, node* newnode) {
    if (sorted == nullptr || sorted->data >= newnode->data) {
        newnode->next = sorted;
        sorted = newnode;
    }
    else {
        node* current = sorted;
        while (current->next != nullptr && current->next->data < newnode->data) {
            current = current->next;
        }
        newnode->next = current->next;
        current->next = newnode;
    }
}

void insertionsort(node*& head) {
    node* sorted = nullptr;
    node* curr = head;
    while (curr != nullptr) {
        node* temp = curr->next;
        sortedinsert(sorted, curr);
        curr = temp;
    }
    head = sorted;
}

int main() {
    // Insert elements into the linked list
    simplelinklist(5);
    simplelinklist(3);
    simplelinklist(8);
    simplelinklist(1);
    simplelinklist(6);

    cout << "Original Linked List: ";
    printList(head);

    // Perform insertion sort
    insertionsort(head);

    cout << "Sorted Linked List: ";
    printList(head);

    // Free the allocated memory
    while (head != nullptr) {
        node* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}

