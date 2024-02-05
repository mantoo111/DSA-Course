#include<iostream>
using namespace std;
int binarysearch(int arr[],int size,int key){
	int start=0;
	int end=size-1;
	int mid=(start+end)/2;
	while(start<=end){
		if (arr[mid]==key){
			return mid;//returning the index that is mid
		}
		//go to right
		if (key>arr[mid]){
			start=mid+1;
			
	}//go to left if small
	else{
		end=mid-1;
		
	}//if not found then this
mid=(start+end)/2;//updating mid value
}
return -1;
}
int main(){
	int even[6]={2,4,6,8,12,18};
	int odd[5]={3,8,11,14,16};
	int index=binarysearch(even,6,12);
	cout<<"index of 12 is"<<index;
}
