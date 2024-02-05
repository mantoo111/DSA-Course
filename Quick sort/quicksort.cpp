#include<iostream>
using namespace std;
int partition(int arr[],int s,int e){
	int pivot=arr[s];
	int cnt=0;
	for(int i=s+1;i<=e;i++){
		if(arr[i]<=pivot){
			cnt++;
		}
		
	}
	//place pivot at right position
	int pivotindex=s+cnt;//tell index where pivot number should be placed
	swap(arr[pivotindex],arr[s]);
	//left and right wala part 
	int i=s;
	int j=e;
	while(i<pivotindex&&j>pivotindex){//both are  index 
		while(arr[i]<pivot){
			i++;
		}
		while(arr[j]>pivot){
			j--;
		}
	if(i<pivotindex&&j>pivotindex){// both are index
		swap(arr[i++],arr[j--]);
	}	
	}
	 if (i == j) {
        swap(arr[i], arr[pivotindex]);
        pivotindex = i;
    }

    return pivotindex;
}
	

void quicksort(int arr[],int s,int e){
	//base case
	if(s>=e){
		return;
	}
	//partition
	int  loc=partition(arr,s,e);
	quicksort(arr,s,loc-1);
	quicksort(arr,loc+1,e);
}
int main(){
	int arr[4]={5,12,1,19};
	int n=4;

	quicksort(arr,0,n-1);
	for(int i=0;i<n;i++){
		cout<<arr[i];
	}
	
    return 0;
}

