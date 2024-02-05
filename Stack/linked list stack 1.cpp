#include<iostream> //implemeting linked list using stack
using namespace std;
struct Node
{
    int data;
    Node *next;
};
Node *top = nullptr;
Node *head = new Node;
void push(int n)
{
    if(top==nullptr)//creating for the first time
    {
        head->data = n;
        head->next = nullptr;
        top = head;
    }
    else
    {                                //creating a new node
        Node *element = new Node;
        element->data = n;
        element->next = top;//creating link with the previous node
        top = element;//incrementing top
    }
}
int main()
{
    push(1);
    push(2);
    Node *current = top;
    while (current != nullptr)//for deleting 
    {
        cout << current->data << " ";
        current = current->next;
    }

    return 0;
}
