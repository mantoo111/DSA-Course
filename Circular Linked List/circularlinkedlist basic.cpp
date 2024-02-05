 #include<iostream>
using namespace std;
        
class Node{
public:    
    int data;
    Node *next;
    Node(int data) {
        this->data = data;
        this->next =nullptr;
    }
};
class CircularLinkedList{
private:
    Node *head;
    Node *tail;
public:
    CircularLinkedList(){
        this->head =nullptr;
        this->tail =nullptr;

    }
    // Destructor
     ~CircularLinkedList() {    // best practice to avoid memory leak
        Node* current = head;
        while(current != nullptr) {
        Node* temp = current;
        current = current->next;// Move to the next node before deleting the current one.
        delete temp;
    }
}






// Function to display
void display(){
    Node *temp=head;
    if(head!=nullptr){
        do{
            cout<<temp->data<<" -> ";
            temp=temp->next;
        }while(temp!=head);
        cout<<"START"<<endl;
    }
}

void InsertAtBeginning(int data) {
    Node* newNode = new Node;
    newNode->data = data;
    if (head == nullptr) {
        // If the list is initially empty, set both head and newNode to point to itself.
        head = newNode;
        newNode->next = newNode;
    } else {
        Node* tail = head;
        while (tail->next != head) {
            tail = tail->next;
        }
        newNode->next = head;  // Set the new node to point to the current head.
        tail->next = newNode;  // Update the next of the current tail to the new node.
        head = newNode;       // Update the head to be the new node.
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

int main() {
    InsertAtBeginning(1);
    InsertAtBeginning(2);
    InsertAtBeginning(3);

    std::cout << "Circular Linked List after inserting at the beginning: ";
    Display();

    return 0;
}
In this code, the InsertAtBeginning function inserts a new node at the beginning of the circular linked list by updating the head, next, and the connections between the nodes. The Display function is used to display the circular linked list.

When you run this code, you'll see that the new elements are inserted at the beginning of the circular linked list.







// Function to insert at tail
void Insert(int data){
    Node* node=new Node(data);
    if(head==nullptr){
        head = node;
        tail = node;
    }

    node->next=head;
    tail->next=node;
    tail=node;

}

// Function to delete the head
void deleteFirst(){
    if(head==nullptr){
        return;
    }
    Node *temp=head;
    head=head->next;
    tail->next=head;
    delete temp;
}

// Function to delete last node
void deleteLast() {
    if (head == nullptr) {
        return;
    }

    Node *toDelete = tail;

    if (head == tail) {// If there's only one node in the list, set head and tail to nullptr
        head = nullptr;
        tail = nullptr;
    } else {
        Node *temp = head;
        while (temp->next != tail) {
            temp = temp->next;
        }
        tail = temp;
        tail->next = head;
    }

    delete toDelete;
}

// Function to delete a particular node
void deleteNode(int val) {
    if(head == nullptr) { 
    // LL is empty
    return; 
    }

    if(head->data == val) {
    // If head node is to be deleted
    Node* temp = head; 
    head = head->next;
    tail->next = head; 
    delete temp;
    return;
    }

    Node* prev = nullptr; 
    Node* curr = head;

    while(curr != nullptr && curr->data != val) {
    prev = curr;
    curr = curr->next; 
    }

    if(curr == nullptr) {
    // Node not found
    return;
    }

    prev->next = curr->next;

    if(curr == tail) {
    tail = prev;
    }

    delete curr;
}

};
int main(){  
        CircularLinkedList list;

        // Inserting elements to end
        list.Insert(2);
        list.Insert(44);
        list.Insert(66);
        list.Insert(6);
        list.Insert(77);
        list.display();


        list.deleteFirst();
        list.display();
        
        list.deleteLast();
        list.display();
    
        list.deleteNode(44);
        list.display();
            
    }
