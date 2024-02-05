#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head = nullptr;
Node*tail=nullptr;
void insert(){
	Node*element=new Node;
	cin>>element->data;
	element->next=head;
	head=element;
}
void display(){
	Node*temp=head;
	while(temp!=nullptr){
	
	cout<<temp->data;
	temp=temp->next;
}
}
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

   
   
int main() {
    int n;
    cout<<"enter the values in linked list"<<endl;
    for (int i = 0; i < 3; i++) {
        insert();
    }

    cout<< "linked list:"<<endl;
    display();
    cout<<"enter the value you want to find"<<endl;
    cin>>n;
    Node*result=find(n);
     if (result != nullptr) {
        cout << "Value " << n << " found in the list." << endl;
    } else {
        cout << "Value " << n << " not found in the list." << endl;
    }
    

   
    return 0;
}

