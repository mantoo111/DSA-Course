#include <iostream>

using namespace std;

// Node structure for linked list
struct Node {
    int data;
    Node* next;
};

// Function to insert a node at the end of the linked list
void insert(Node*& head, int data) {
    Node* newNode = new Node;
    newNode->data = data;
    newNode->next = NULL;

    if (!head) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

// Function to print the linked list
void printList(Node* head) {
    while (head) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

// Function to get the digit at the specified place
int getDigit(int num, int place) {
    while (place > 1) {
        num /= 10;
        place--;
    }
    return num % 10;
}

// Function to perform radix sort on a linked list
void radixSort(Node*& head) {
    if (!head || !head->next) {
        return;
    }

    int maxDigits = 0;
    Node* temp = head;

    // Find the maximum number of digits in the linked list
    while (temp) {
        int numDigits = 0;
        int num = temp->data;
        while (num > 0) {
            num /= 10;
            ++numDigits;
        }
        if (numDigits > maxDigits) {
            maxDigits = numDigits;
        }
        temp = temp->next;
    }

    // Perform counting sort for each digit place
    for (int place = 1; place <= maxDigits; ++place) {
        Node* output[10] = {NULL};
        temp = head;

        // Build the output array using counting sort
        while (temp) {
            int index = getDigit(temp->data, place);
            Node* next = temp->next;
            temp->next = output[index];
            output[index] = temp;
            temp = next;
        }

        // Update the linked list
        head = NULL;
        for (int i = 9; i >= 0; --i) {
            Node* current = output[i];
            while (current) {
                Node* next = current->next;
                current->next = head;
                head = current;
                current = next;
            }
        }
    }
}

int main() {
    // Example usage
    Node* head = NULL;

    // Insert elements into the linked list
insert(head, 170);
insert(head, 45);
insert(head, 75);
insert(head, 90);
insert(head, 802);
insert(head, 24);
insert(head, 2);
insert(head, 66);

cout << "Original List: ";
printList(head);

    // Perform Radix Sort
radixSort(head);

cout << "Sorted List  : ";
printList(head);

    // Free memory
Node* current = head;
Node* next;
while (current) {
next = current->next;
delete current;
current = next;
}   
}

