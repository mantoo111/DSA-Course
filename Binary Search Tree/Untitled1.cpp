#include <iostream>

using namespace std;

// Node structure for a linked list
struct Node {
    int data;
    Node* next;

    // Constructor to initialize a node
    Node(int val) : data(val), next(nullptr) {}
};

// Function to merge two sorted linked lists
Node* mergeLinkedLists(Node* head1, Node* head2) {
    Node* mergedHead = nullptr;
    Node* current = nullptr;

    while (head1 != nullptr && head2 != nullptr) {
        if (head1->data < head2->data) {
            if (mergedHead == nullptr) {
                mergedHead = current = head1;
            } else {
                current->next = head1;
                current = current->next;
            }
            head1 = head1->next;
        } else {
            if (mergedHead == nullptr) {
                mergedHead = current = head2;
            } else {
                current->next = head2;
                current = current->next;
            }
            head2 = head2->next;
        }
    }

    // If one of the linked lists is not exhausted, append the remaining nodes
    if (head1 != nullptr) {
        current->next = head1;
    } else if (head2 != nullptr) {
        current->next = head2;
    }

    return mergedHead;
}

// Function to perform bubble sort on a linked list
void bubbleSortLinkedList(Node* head) {
    int n;
    Node* temp;
    Node* end = nullptr;

    do {
        n = 0;
        temp = head;

        while (temp->next != end) {
            if (temp->data > temp->next->data) {
                // Swap temp and temp->next data
                int swapData = temp->data;
                temp->data = temp->next->data;
                temp->next->data = swapData;
                n = 1;
            }

            temp = temp->next;
        }
        end = temp;

    } while (n);
}

// Function to print the linked list
void printLinkedList(Node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    // Creating the first linked list
    Node* head1 = new Node(9);
    head1->next = new Node(3);
    head1->next->next = new Node(7);
    head1->next->next->next = new Node(5);
    head1->next->next->next->next = new Node(0);

    // Creating the second linked list
    Node* head2 = new Node(2);
    head2->next = new Node(4);
    head2->next->next = new Node(6);

    cout << "Linked List 1 before merging and sorting: ";
    printLinkedList(head1);

    cout << "Linked List 2 before merging and sorting: ";
    printLinkedList(head2);

    // Merging and sorting the linked lists
    Node* mergedHead = mergeLinkedLists(head1, head2);
    bubbleSortLinkedList(mergedHead);

    cout << "Merged and Sorted Linked List: ";
    printLinkedList(mergedHead);

    return 0;
}

