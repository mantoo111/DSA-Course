#include <iostream>

using namespace std;
//shift all nonzero
void moveZero(int arr[], int n) {
    int i = 0;//hamare nonzero value oth index pe ani chaye

    for (int j = 0; j < n; j++) {
        if (arr[j] != 0) {
            swap(arr[j], arr[i]);
            i++;
        }
    }
}

int main() {
    int num[] = {0, 1, 0, 3, 0, 12};
    int n = sizeof(num) / sizeof(num[0]);

    moveZero(num, n);

    cout << "Modified array: ";
    for (int i = 0; i < n; i++) {
        cout << num[i] << " ";
    }
    cout << endl;

    return 0;
}

