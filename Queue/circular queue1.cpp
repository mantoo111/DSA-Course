#include <iostream>
using namespace std;

int f = -1;
int r = -1;
int queue[5];

void enqueue(int n) {
    if ((f == 0 && r == 4) || (r == f - 1)) {
        cout << "Circular queue is full" << endl;
        return;
    }

    if (f == -1) {//first element to push
        f = 0;
        r = 0;
    } else if (r == 4) {
        r = 0;
    } else {
        r++;
    }

    queue[r] = n;
}

int dequeue() {
    if (f == -1) {
        cout << "Circular queue is empty" << endl;
        return -1; // Return a sentinel value to indicate an error
    }

    int data = queue[f];

    if (f == r) {
        f = r = -1;
    } else if (f == 4) {
        f = 0;
    } else {
        f++;
    }

    return data;
}

int main() {
    int val;
    cout << "Enter a value: ";
    cin >> val;
    enqueue(val);

    int dequeuedValue = dequeue();
    if (dequeuedValue != -1) {
        cout << "Dequeued value: " << dequeuedValue << endl;
    }

    return 0;
}

