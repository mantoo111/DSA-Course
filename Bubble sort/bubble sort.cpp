#include<iostream >
using namespace std;
int main(){
	 int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
	for(int i=1;i<n;i++){
	//for round 1 to n-1
	for(int j=0;j<n-i;j++){
		if(arr[j]>arr[j+1]){
		swap(arr[j],arr[j+1]);	
		}
	}	
	}
cout << "Sorted array in ascending order:" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
