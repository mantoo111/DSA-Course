#include <iostream>

class Node {
public:
    int data;
    Node* next;
    Node(int value) : data(value), next(nullptr) {}
};

class CircularLinkedList {
private:
    Node* head;

public:
    CircularLinkedList() : head(nullptr) {}

    // Insertion at the end of the circular linked list.
    void insert(int value) {
        Node* newNode = new Node(value);n
        if (head == nullptr) {
            head = newNode;
            head->next = head;  // Make it circular.
        } else {
            Node* tail = head;
            while (tail->next != head) {
                tail = tail->next;
            }
            tail->next = newNode;
            newNode->next = head;  // Update the last node's next to point to the head.
        }
    }

    // Deletion of a specific value in the circular linked list.
    void remove(int value) {
        if (head == nullptr) {
            std::cout << "List is empty." << std::endl;
            return;
        }

        Node* current = head;
        Node* prev = nullptr;

        do {
            if (current->data == value) {
                if (prev != nullptr) {
                    prev->next = current->next;
                    if (current == head) {
                        head = current->next;
                    }
                    delete current;
                    return;
                } else {
                    // If the value to be deleted is at the head.
                    Node* tail = head;
                    while (tail->next != head) {
                        tail = tail->next;
                    }
                    if (head == tail) {
                        head = nullptr;
                    } else {
                        head = head->next;
                        tail->next = head;
                    }
                    delete current;
                    return;
                }
            }

            prev = current;
            current = current->next;
        } while (current != head);

        std::cout << "Value not found in the list." << std::endl;
    }

    // Display the circular linked list.
    void display() {
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
};

int main() {
    CircularLinkedList list;

    list.insert(1);
    list.insert(2);
    list.insert(3);

    std::cout << "Circular Linked List: ";
    list.display();

    list.remove(2);
    std::cout << "Circular Linked List after removing 2: ";
    list.display();

    list.remove(1);
    std::cout << "Circular Linked List after removing 1: ";
    list.display();

    return 0;
}

