#include <iostream>
#include <queue>
#include <stack>

using namespace std;

void reverseQueue(queue<int> &q) {
    stack<int> s;

    
    while (!q.empty()) {
        s.push(q.front());
        q.pop();
    }
    while (!s.empty()) {
        q.push(s.top());
        s.pop();
    }
}

void displayQueue(queue<int> q) {
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}

int main() {
    queue<int> myQueue;

    // Enqueue some elements
    myQueue.push(1);
    myQueue.push(2);
    myQueue.push(3);
    myQueue.push(4);

    cout << "Original Queue: ";
    displayQueue(myQueue);

    // Reverse the queue
    reverseQueue(myQueue);

    cout << "Reversed Queue: ";
    displayQueue(myQueue);

    return 0;
}

