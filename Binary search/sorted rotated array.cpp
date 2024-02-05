//search a rotated sorted array
//on which line we apply binary search
//arr[pivot]<=target<=arr[n-1]
//true           false  1st line
#include<iostream>
using namespace std;
int getpivot(int arr[], int n){
	int s=0;
	int e=n-1;
	int mid=s+(e-s)/2;//mid=2
	while(s<e){
		if(arr[mid]>=arr[0]){//10>3 true
		//s=mid+1
		//mid=3        17>3 true
		//mid=4        1>=3 false so we update the end as e=mid
		//
			s=mid+1;
		}
		else{
			e=mid;
		}
		mid=s+(e-s)/2;
		
	}
	return  s;
}
int binarysearch(int arr[], int s,int e, int key){
	int start=s;
	int end=e;
	int mid=start+(end-start)/2;//mid=2
	while(start<=end){
		if(arr[mid]==key){
			return mid;
		}
		if(key>arr[mid]){//go to right side
			start=mid+1;
		}
		else{
			end=mid-1;
		}
		mid=start+(end-start)/2;
		
	}
	return  -1;
}
int main(){
	int n;
	int k;
	int pivot=getpivot(int arr,n);
	if (k>=arr[pivot]&&k<=arr[n-1]){//binary search on second line
		return binarysearch(arr, pivot,n-1,k);
	}
	else{//binary search on second line
		return binarysearch(arr,0,pivot-1,k);
	}
}
