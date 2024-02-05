#include <iostream>

using namespace std;

void merge(int arr1[], int n, int arr2[], int m, int arr3[]) {
    int i = 0, j = 0;
    int k = 0;
    while (i < n && j < m) {
        if (arr1[i] < arr2[j]) {
            arr3[k] = arr1[i];
            k++;
            i++;
        } else {
            arr3[k] = arr2[j];
            k++;
            j++;
        }
    }
    // Copy first array elements
    while (i < n) {
        arr3[k] = arr1[i];
        k++;
        i++;
    }
    // Copy second array elements
    while (j < m) {
        arr3[k] = arr2[j];
        k++;
        j++;
    }
}
//applying sortingg technique
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j + 1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void print(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr1[5] = {9, 3, 7, 5, 0}; // i
    int arr2[3] = {2, 4, 6};       // j
    // Compare i and j and then move i and j
    int arr3[8] = {0};
    merge(arr1, 5, arr2, 3, arr3);
    
    cout << "Merged Array before sorting: ";
    print(arr3, 8);

    // Sorting the merged array using bubble sort
    bubbleSort(arr3, 8);

    cout << "Merged Array after sorting: ";
    print(arr3, 8);

    return 0;
}

