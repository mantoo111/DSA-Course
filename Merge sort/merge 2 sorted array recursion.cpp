#include<iostream>
using namespace std;
void merge(int arr[],int s,int e){
	int mid=(s+e)/2;
	int len1=mid-s+1;//after dividing the main array in to two this become sub array1 length
	int len2=e-mid;    //sub array2 length       //k represent main array  index
	int *first=new int[len1];
	int *second=new int[len2];
	//copy values
	int k=s;
	for(int i=0;i<len1;i++){
		first[i]=arr[k++];
	}
	 k=mid+1;
		for(int i=0;i<len2;i++){
		second[i]=arr[k++];
	}
	//merge 2 sorted arrays
	int index1=0;
	int index2=0;
	k=s;
	while(index1<len1&&index2<len2){
		if(first[index1]<second[index2]){
			arr[k++]=first[index1++];
		}
		else{
			arr[k++]=second[index2++];
		}
	}
	while(index1<len1){
		arr[k++]=first[index1++];
	}
	while(index2<len2){
		arr[k++]=second[index2++];
	}
	
	
}
void mergesort(int arr[],int s,int e){
	//base case
	if(s>=e){
		return;
	}int mid=(s+e)/2;
	mergesort(arr,s,mid);//eft part sort karna ka liya
	mergesort(arr,mid+1,e);//right side sort karna ka liya
	merge(arr,s,e);
}
int main(){
	int arr[5]={2,5,1,6,9};
	int n=5;
	mergesort(arr,0,n-1);
	for(int i=0;i<n;i++){
		cout<<arr[i];
	}
}
