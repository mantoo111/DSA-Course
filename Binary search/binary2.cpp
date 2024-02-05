//find thefirst and last position of an element in sorted array;
#include<iostream>
using namespace std;
int firstocc(int arr[],int n,int key){
	int start=0;
	int end=n-1;
	int ans=-1;
	int mid=start+(end-start)/2;
	while(start<=end){
		if (arr[mid]==key){
			ans=mid;
			end=mid-1;//returning the index that is mid
		}
	
		else if(key>arr[mid]){
			start=mid+1;
			
	}//go to left if small
	else if(key<arr[mid]){

		end=mid-1;}
 mid=start+(end-start)/2;		
	}
return ans;
}
int lastocc(int arr[],int n,int key){
	int start=0;
	int end=n-1;
	int ans=-1;
	int mid=start+(end-start)/2;
	while(start<=end){
		if (arr[mid]==key){
			ans=mid;
			end=mid+1;//returning the index that is mid
		}
	
		else if(key>arr[mid]){
			start=mid+1;
			
	}//go to left if small
	else if(key<arr[mid]){

		end=mid-1;}
 mid=start+(end-start)/2;		
	}
return ans;
}
int main(){
	int even[5]={1,2,3,3,5};
	cout<<"fist occurence of 3 is"<<firstocc(even,5,3);
	return 0;
}

