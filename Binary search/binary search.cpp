#include<iostream>
using namespace std;
int binarysearch(int arr[],int length,int key){
	int start=0;
	int end=length-1;
	int mid;
	mid=start+(end-start)/2;
	while(start<=end){
		if(arr[mid]==key){
			return mid;
		}
			else if(key>arr[mid]){
					start=mid+1;
					
			
		}
		else{
			end=mid-1;
			
			
		}
		mid=start+(end-start)/2;
		
	}
	return -1;
}

int main(){
	int arr[]= {1,5,7,8,10};
//	int arr[]= {-18,-12,-4,0,2,4,15,16,18,22,45,89};
	int length=sizeof(arr)/sizeof(arr[0]);
	int k;
	cout<<"enter the key to search"<<endl;
	cin>>k;
int ans=binarysearch(arr,length,k);
cout<<ans;
}

