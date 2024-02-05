// LeetCode: 225. Implement Stack using Queues
// https://leetcode.com/problems/implement-stack-using-queues/


#include<iostream>
#include<queue>
using namespace std;

class StackUsingQueue {
    queue<int> q1;
    queue<int> q2;
    int size;

public:
    StackUsingQueue(){
        size = 0;
    }
// Function to insert elements
    void push(int x) {
        q2.push(x);
        size++;
        while (!q1.empty()) 
        {
            q2.push(q1.front());
            q1.pop();
        }
        // swapping elements / again putting back all elements back
        swap(q1, q2);
    }
// Function to remove elements
    int pop() {
        int topValue = q1.front();
            q1.pop();
            size--;
            return topValue;
        }

// Function to find top element
int top(){
    return q1.front();
}  
// Function to check empty
bool empty(){
    return q1.empty();
}

};

int main(){
    StackUsingQueue stk;
    stk.push(1);
    stk.push(2);
    stk.push(3);
    stk.push(4);

    cout << stk.top() << endl;
    stk.pop();
    cout << stk.top() << endl;

    cout<<stk.top();

}
