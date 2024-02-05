#include<iostream>
using namespace std;
int peak(arr[],int size, int key){
	int s=0;
	int e=arr.size()-1;
	int mid=s+(e-s)/2;
	while(s<e){

	if(arr[mid]<arr[mid+1]){//this line show that you are on the sytarting line
		s=mid+1;
	}
	else{
		e=mid;
	}
	mid=s(e-s)/2;
}
return s;
	}
