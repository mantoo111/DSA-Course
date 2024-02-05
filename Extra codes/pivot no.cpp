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
int main(){
	int arr[5]={3,8,10,17,1};
	cout<<"pivot number is"<<getpivot(arr,5);
}
