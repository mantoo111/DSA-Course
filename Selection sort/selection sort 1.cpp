#include<iostream>
using namespace std;
int main(){//for ex if my arr is[1,5,3,4,2]
 int n; // You need to define 'n' (the size of the array) here
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n]; // Declare an array of size 'n'

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];}
	for(int i=0;i<n-1 ;i++){//for i value that is index;now 1 ia at index i=0
		int minindex=i;//we assume that at zero index there is a small value
			for(int j=i+1;j<n ;j++){//and 5,3,2,4 are at j index
				if(arr[j]<arr[minindex]){//if any value at j index is smaller than i index then reset the minindex
					minindex=j;
				}
	}
//	swap(arr[minindex],arr[i]);or can be doneusing this
// Swap the elements manually
        int temp = arr[i];
        arr[i] = arr[minindex];
        arr[minindex] = temp;
}
for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
