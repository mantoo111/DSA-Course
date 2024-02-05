#include<iostream>
using namespace std;

struct Node //structure of link node
{
  int data;
  Node *ptr;
} *front = NULL,*rear = NULL,*pointer = NULL,*start = NULL;

void enqueue (int item) //push the value in the queue
{
  start = new Node;
  start->data = item;
  start->ptr = NULL;
  if (front == NULL)
    {
      front = rear = start;
      rear->ptr = NULL;
    }
  else
    {
      rear->ptr = start;
      rear = start;
      rear->ptr = NULL;
    }
}

int dequeue () //remove the value from the queue
{
  int item;
  if (front == NULL)
    {
      cout << "Queue is empty!!\n";
    }
  else
    {
      pointer = front;
      item = pointer->data;
      front = front->ptr;
      delete (pointer);
      return (item);
    }
}

int main ()
{

  int n, counter = 0, x1;
  cout << "Enter the number of values to be pushed into queue:-\n";
  cin >> n;
  cout << "Enqueue the value:";
  while (counter < n) { cin >> x1;
      enqueue (x1);
      counter++;
    }
  cout << " After Dequeue :-\n";
  while (true)
    {
      if (front != NULL)
	cout << dequeue () << endl;
    else
	break;
    }
}

