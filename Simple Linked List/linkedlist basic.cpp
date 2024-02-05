#include<iostream>
using namespace std;

class Node{   // you can also use structure instead of  class but class is more benificial.
public:         // Using a class for a linked list provides a more organized and encapsulated way to work with linked data structures and simplifies the management of the list's internal state and operations.
    int data;
    Node* next;

    Node(int data) {    
        this->data = data; 
        this->next =nullptr;
    }

};
class LinkedList{
private:
// public:       // if we want to see head and tail in main then public it
    Node* head;
    Node* tail;
    int size;
public:

    LinkedList(){    // constructor
        this->head = nullptr;
        this->tail = nullptr;
        this->size = 0;
    }
                // From here make all the functions you want

    // Destructor                    // best practice to avoid memory leaks
    ~LinkedList() {
        Node* current = head;
        while(current != nullptr) {
            Node* temp = current;
            current = current->next;
            delete temp; 
    }
}
//Function for displaying linkedList
void display(){
    Node *temp= head;   // taking temp because otherwise it will change internal working of head  in this copy (temp) is set to head and moving one step forward
    while(temp != nullptr){
        cout<<temp->data<<" -> ";
        temp=temp->next; 
    }
    cout<<"NULL"<<endl;
}


// Function to insert at Frist or at head
void insertAtFirst(int data){
    Node* node =new Node(data);
    node->next=head;
    head=node;

    if(tail==nullptr){  // for first element  i.e if there is no element is present then obviously tail is nullptr so when new nde id added it is head and also a tail
        tail=head; 
    }
    size++;
}


// Function to insert at Last or at tai 
void insertAtLast(int data){

    if(tail==nullptr){    // LinkedList is empty
        insertAtFirst(data);
        return;  //return because  don't  call/run below statement  and return/stop this function here
    }
    Node* node=new Node(data);
    tail->next=node;
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
    node->next=current->next;  //   |->
    current->next=node;    //updated here now current point to new enterd node    //   |->  maintain arrangement of these two lines  
    size++;
    

}

//  Function to delete first node
int deleteFirstNode(){
    int value=head->data;  // if needed
    Node* temp=head;
    head=head->next;
    if(head==nullptr){ // if only one node is there 
        tail=nullptr;
    }
    delete temp; // TO prevent memory leaks
    size--;
    return value; // if needed, if user want to display value  otherwisw no need

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
// Function to delete Last node
int deleteLastNode(){
    if(size<=1){
        return deleteFirstNode();
    }
    Node* secondLastNode =get(size-2); // size -2 becaue in actual it is size -1 (if we think)  ,,,, but we see that this -2 means that if size is 5 it will move till 3 index and ->next will move one step forward also so it become 4 index (secondlast index) 
    int value = tail->data;
    Node* temp =tail;
    tail=secondLastNode;
    tail->next=nullptr;
    delete temp; //to avoid memory leak
    size--;
    return value;
}

// Function to delete at a position

int deletePositionedNode(int index){
    if(index==0){
        return deleteFirstNode();
    }
    if(index==size-1){
        return deleteLastNode();
    }

    Node* previous =get(index-1);
    int value=previous->next->data;
 
    Node* temp=previous->next;
    previous->next=previous->next->next;
    delete temp;
    return value;
}

// Function to Find a node:n
Node* find(int value) {
        Node* node = head;// Start from the head of the list.
        while (node != nullptr) {
            if (node->data == value) {
                return node;
            }
            node = node->next;// Move to the next node in the list.
        }
        return nullptr;
    }


};

int main(){  
    LinkedList list;
    cout << "Insertion at first index--------\n";
    list.insertAtFirst(5);
    list.insertAtFirst(6);
    list.insertAtFirst(4);
    list.insertAtFirst(9);

    list.display();  // displaying LinkedList

    cout << "\nInsertion at last index--------\n";
    list.insertAtLast(111);
    list.display();


    /* cout<<list.head->data << endl;
    cout<<list.tail->data << endl; */     // if we want to see head and tail in main then public head and tail in class

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

