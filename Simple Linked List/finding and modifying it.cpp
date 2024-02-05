#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head = nullptr;
Node*tail=nullptr;
void insert(int val){
	Node*element=new Node;
	element->data=val;
	element->next=nullptr;
	if(head==nullptr){
		head=tail=element;
	
	}
	else{
	tail->next=element;
	tail=element;
}
}
void display(){
	Node*temp=head;
	while(temp!=nullptr){
	
	cout<<temp->data<<"->";
	temp=temp->next;
}
cout<<"Start"<<endl;
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
        insert(7);
        insert(67);
        insert(34);
        insert(56);
    

    cout<< "linked list:"<<endl;
    display();
    cout<<"enter the value you want to find"<<endl;
    cin>>n;
     Node*result=find(n);
      if (result != nullptr) {
    cout << "Value " << n << " found in the list." << endl;}
    cout<<"ater modifying it"<<endl;
    int newvalue;
    cout<<"enter the number"<<endl;
     cin>>newvalue;
     result->data=newvalue;
     display();
   

    

   
    return 0;
}

   
   
   
