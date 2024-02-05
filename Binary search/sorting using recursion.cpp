#include<iostream>
using namespace std;
bool isSorted(int arr[],int sie){
	if(sie==0 || sie==1){
	return true;
	}
	if(arr[0]>arr[1]){
		return false;
	}
	else{
		bool remaining=isSorted(arr+1,sie-1);
		return remaining;
	}	
	
}
int main(){
	int arr[4]={2,5,6,8};
	int sie=4;
	bool ans=isSorted(arr,sie);
	if(ans){
		cout<<"array is sorted"<<endl;
	}
	else{
		cout<<"array is not sorted"<<endl;
	}
}
