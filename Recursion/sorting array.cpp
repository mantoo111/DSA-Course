#include<iostream>//bubble sort
using namespace std;
void sortarray(int *arr,int n){
	//base case
	if(n==0||n==1){
		return;
	}//1 case solve kar iya,largest value ko end me rak dege
	for(int i=0;i<n-1;i++){
		if(arr[i]>arr[i+1]){
			swap(arr[i],arr[i+1]);
		}
	}//recursive call
	sortarray(arr,n-1);
}
int main(){
	int arr[5]={2,5,1,6,9};
	sortarray(arr,5);
	for(int i=0;i<5;i++){
		cout<<arr[i];
	}
}
