// Write a program to find a Minimum in LL and delete it
#include<iostream>
using namespace std;

class Node{   
public:         
    int data;
    Node* next;

    Node(int data) {    
        this->data = data; 
        this->next =nullptr;
    }

};
class LinkedList{
private:
    Node* head;
    Node* tail;
public:

    LinkedList(){    // constructor
        this->head = nullptr;
        this->tail = nullptr;
    }

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
    Node *temp= head;   
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
}
Node* minimum(){
    Node* min=head;
    Node* temp=head->next;  // start form head next bec we initialize min to head
    while(temp!=nullptr){ // check till end
        if(temp->data<min->data){
            min=temp;
        }
        temp=temp->next;
    }
    cout<<"Minimum Element: "<<min->data<<endl;
    return min;
}

void DeleteMinimum(){
    Node* min=minimum();

    if(min==head){
        head=head->next;
        delete min;
    }
    else{
        Node* prev=head;
        while(prev->next!=min){
            prev=prev->next;
        }
        if(prev->next==NULL){  // if node is found at last
            tail=prev;
            tail->next=NULL;
            delete min;
        }else{
            prev->next=min->next;
            delete min;
        }
    }

}

};

int main(){  
    LinkedList list1;
    list1.insertAtFirst(2);
    list1.insertAtFirst(42);
    list1.insertAtFirst(-3);
    list1.insertAtFirst(5);

    list1.display();  // displaying LinkedList

    list1.DeleteMinimum();
    list1.display(); 

}
