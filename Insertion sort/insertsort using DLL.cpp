#include<iostream>
using namespace std;

struct node {
    int data;
    node* next;
    node* prev;
};

node* head = nullptr;
node* tail = nullptr;

void insert(int val) {
    node* element = new node;
    element->data = val;
    element->next = nullptr;
    element->prev = nullptr;

    if (head == nullptr) {
        head = tail = element;
    } else {
        tail->next = element;
        element->prev = tail;
        tail = element;
    }
}

void display() {
    node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

void insertionsort() {
    node *i, *j;
    int temp;
    for (i = head; i != nullptr; i = i->next) {
        temp = i->data;
        j = i->prev;

        while (j != nullptr && j->data > temp) {
            j->next->data = j->data;
            j = j->prev;
        }

        if (j == nullptr) {
            head->data = temp;
        } else {
            j->next->data = temp;
        }
    }
}

int main() {
    insert(4);
    insert(78);
    insert(47);
    insert(1);
    insert(674);

    cout << "Original Linked List: ";
    display();

    insertionsort();

    cout << "Linked List after Insertion Sort: ";
    display();

    return 0;
}

