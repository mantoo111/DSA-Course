#include <iostream>

using namespace std;

int main() {
    int n;e number of elements in the array: ";
    cin >> n;

    cout << "Enter th
    int arr[n];

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Reversing the array
    int start = 0;
    int end = n - 1;

    while (start < end) {
        // Swap the elements at the start and end positions
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        // Move the pointers towards each other
        start++;
        end--;
    }

    cout << "Reversed array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

