#include<iostream>
using namespace std;
                

class Node{
public:    
    int data;
    Node* next;
    Node* prev;

    Node(int data){
        this->data = data;
        this->next =nullptr;
        this->prev =nullptr;
    }
};

class DoubleLinkedList{
private:
    Node* head;
    Node* tail;
    int size;
public:
    DoubleLinkedList(){
        this->head =nullptr;   // or by default it is assigned nullptr
        this->tail =nullptr;
        this->size =0;
    }

    ~DoubleLinkedList() {    // best practice to avoid memory leak
        Node* current = head;
        while(current != nullptr) {
        Node* temp = current;
        current = current->next;
        delete temp;
    }
}

                    // From here make all the functions you want


// Function for displaying the linkedlist
void display(){
    Node *node=head;
    while(node!=nullptr){
        cout<<node->data<<" -> ";
        node=node->next;

    }
    cout<<"NULL"<<endl;

    
}


// Function for inserting at first/ head
void insertAtFirst(int data){
    Node *node =new Node(data);
    node->next =head;
    node->prev =nullptr; //

    if(head!=nullptr){  // because if it the  first element inserted then it will give error
        head->prev =node; // so if there is already element present in LL then it will insert at head or at first
    }
    head=node;
    if (tail == nullptr) {   // for first element  i.e if there is no element is present then obviously tail is nullptr so when new nde id added it is head and also a tail
            tail = head;
    }
        size++;
}    




// Function to insert at last/ tail
void insertAtLast(int data){
    if (tail == nullptr) {  // LinkedList is empty
            insertAtFirst(data);
            return;
        }

    Node *node=new Node(data);
    tail->next=node;
    node->prev=tail;
    tail=node;
    size++;

}

// Function to insert at a position
void insertAtPosition(int data,int index){
    if (index < 0 || index > size) {
        cout << "Invalid position for insertion." << endl;
        return;
    }
    if(index==0){
        insertAtFirst(data);
        return;
    }
    if(index==size){
        insertAtLast(data);
        return;
    }

    Node* current = head;  // 0 index 
    for (int i = 1; i < index; i++) // thats why starting from 1 index and should reach 1 element before we want to insert for forexample if we want to go t0 target 3 we go till 2
    {
        current = current->next;
    }
	
	Node *node=new Node(data);
    node->next=current->next;  
    node->prev=current;
    current->next=node;
    current->next->prev=node;


    size++;
    

}

// Function to delete first node
int deleteFirstNode() {
    if (head == nullptr) {
        cout << "List is empty. Nothing to delete." << endl;
        return -1; 
    }
    int value = head->data;
    Node* temp=head;
    head = head->next;
    if (head != nullptr) {
        head->prev = nullptr; 
    } else {
        tail = nullptr;
    }
    delete temp;
    size--;
    return value;
}


// Function to delete Last node
int deleteLastNode() {
    if (tail == nullptr) {
        cout << "List is empty. Nothing to delete." << endl;
        return -1; // Return a default value indicating failure
    }
    int value = tail->data;
    Node* temp = tail;
    tail = tail->prev;
    if (tail != nullptr) {
        tail->next = nullptr; // Update the new tail node's next pointer
    } else {
        head = nullptr;
    }
    delete temp;
    size--;
    return value;
}

// For getting previous node we want to delete
Node* get(int index){
    Node* node =head;
    for (int i = 0; i < index; i++)  // i < index because it start from 0  or can be    <= index-1;
    {
        node=node->next; 
    }
    return node;
    
}
int deletePositionedNode(int index) {
    if (index < 0 || index >= size) {
        cout << "Invalid position for deletion." << endl;
        return -1; 
    }

    if (index == 0) {
        return deleteFirstNode();
    }

    if (index == size - 1) {
        return deleteLastNode();
    }

    Node* current = get(index-1);
    int value = current->next->data;
    Node *temp=current->next;
    current->next = current->next->next;
    current->next->prev = current; 
    delete temp;
    size--;

    return value;
}

};
int main(){  
    DoubleLinkedList list;
    
    cout << "Insertion at first index--------" << std::endl;
    list.insertAtFirst(6);
    list.insertAtFirst(65);
    list.insertAtFirst(22);
    list.insertAtFirst(4);
    list.display();

    cout << "\nInsertion at last index--------" << std::endl;
    list.insertAtLast(44);
    list.display();

    cout << "\nInsertion at specific index--------\n";
    list.insertAtPosition(100,3);
    list.display();


    cout << "\nDeleting first---------\n";
    cout<<"The value deleted is: "<<list.deleteFirstNode()<<endl;
    list.display();

    cout << "\nDeleting last-----------\n";
    cout <<"The element deleted is: "<< list.deleteLastNode()<<endl;
    list.display();

    cout << "\nDeleting specific item from index------\n";
    cout <<"Element deleted is : "<< list.deletePositionedNode(2) << "\n";
    list.display();
    }
