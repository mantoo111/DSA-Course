#include<iostream>
using namespace std;
int partition(int arr[],int l,int u){
	int pivot=arr[l];
	int i=l;
	int j=u;
	//place pivot at right position
	while(i<j){
		
	while(arr[i]<=pivot){
		i++;
}
	while(arr[j]>pivot){
		j--;
	}
	if(start<end){
		swap(arr[start],arr[end]);

	}
}
swap(arr[l],arr[u]);
return end;	
}
void quicksort(int arr[],int l,int u){
	//base case
	if(l>=u){
		return;
	}
	//partition
	int  loc=partition(arr,l,u);
	quicksort(arr,l,loc-1);
	quicksort(arr,loc+1,u);
}
int main(){
	int arr[5]={2,4,1,6,9};
	int n=5;
	quicksort(arr,0,n-1);
	for(int i=0;i<n;i++){
		cout<<arr[i];
	}
	return 0;
}
