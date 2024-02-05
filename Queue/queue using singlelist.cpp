#include <iostream>
using namespace std;

struct node {
    int data;
    node* next;
};

node* front = nullptr;  // Points to the front of the queue
node* rear = nullptr;   // Points to the rear of the queue

void enqueue(int val) {
    node* element = new node;
    element->data = val;
    element->next = nullptr;
    
    if (rear == nullptr) {
        // If the queue is empty, set both front and rear to the new element
        front = rear = element;
    } else {
        // Otherwise, add the new element to the rear and update the rear pointer
        rear->next = element;
        rear = element;
    }
}

void dequeue() {
    if (front == nullptr) {
        cout << "Queue is empty. Cannot dequeue." << endl;
        return;
    }
    
    node* element = front;
    front = front->next;
    
    if (front == nullptr) {
        // If front becomes null, it means the queue is now empty, so update rear as well
        rear = nullptr;
    }
    
    cout << "Dequeued: " << element->data << endl;
    delete element;  // Deallocate memory for the dequeued element
}

void display() {
    node* temp = front;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    int n;
    for (int i = 0; i < 4; i++) {
        cin >> n;
        enqueue(n);
    }

    cout << "Queue elements: ";
    display();

    cout << "Dequeued values: " << endl;
    for (int i = 0; i < 4; i++) {
        dequeue();
    }

    return 0;
}

