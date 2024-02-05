#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
Node *head = nullptr;
void insert(int n)
{
    Node *element = new Node;
    element->data = n;
    element->next = nullptr;
    if(head == nullptr)
    {
        head = element;
    }
    else
    {
        element->next = head;
        head = element;
    }

}
void del()
{
    Node *temp = head;
    while(temp!=nullptr)
    {
        cout<<temp->data<<endl;
        temp = temp->next;
    }
}
void sort()
{
    for(Node *i=head;i!=nullptr;i=i->next)
    {
    	Node *min = i;
        for(Node *j=i->next;j!=nullptr;j=j->next)
        {
            if(j->data < min->data)
            {
                min = j;
            }
        }
        if(min!=i)
        {
            int temp = i->data;
            i->data = min->data;
            min->data = temp;
        }
    }
}
int main() {
	int n;
   for(int i=0;i<5;i++)
   {
   	   cout<<"Enter a value:"<<endl;
       cin>>n;
       insert(n);
   }
   sort();
   cout<<"Values after sorting:"<<endl;
   del();
    return 0;
}
