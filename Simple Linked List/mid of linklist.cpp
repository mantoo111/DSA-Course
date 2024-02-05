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
    element->next = nullptr;

    if (head == nullptr) {
        head = element;
        tail = element;
    }
    else {                    //inserting at the last
        tail->next = element;
        tail = element;
    }
}

node* findmiddle(node* head) {
    node* fast = head;
    node* slow = head;

    while (fast != nullptr && fast->next != nullptr) {
        fast = fast->next->next;
        slow = slow->next;
    }

    return slow;
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
     simplelinklist(6);

    display();

    head = findmiddle(head);
    cout << "Middle element: " << head->data << endl;

    return 0;
}

