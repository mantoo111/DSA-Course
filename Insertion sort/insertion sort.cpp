#include <iostream>
using namespace std;

int main() {
    int n;//{4,12,11,20}assume 4 is sorted
// i=1       j i
//j=0,j=i-1 
//12>4  right side and thn break    
// 11 is sore in temp 11<12   arr become4,12,12,20
//arr[j+1]=temp
//arr[0+1]+arr[i]=11  
//i=3,j=2
//20>12 break
////arr[j+1]=temp
//arr[2+1]+arr[i]=20
    // Get the value of n, the number of elements in the array
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];

    // Input the elements of the array
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 1; i < n; i++) {
        int temp = arr[i];
        int j = i - 1;

        // Move elements of arr[0..i-1] that are greater than temp
        // to one position ahead of their current position
        while (j >= 0 && arr[j] > temp) {
            arr[j + 1] = arr[j];
            j--;
        }

        // Place temp in its correct position
        arr[j + 1] = temp;
    }

    // Output the sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

