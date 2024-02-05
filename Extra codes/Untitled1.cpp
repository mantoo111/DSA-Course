#include<iostream>
using namespace std;

static int BinarySearch(int arr[],int length,int target);

int main(){
    // For sorted array in accending order
int arr[]= {-18,-12,-4,0,2,4,15,16,18,22,45,89};
int target=22;
int length=sizeof(arr)/sizeof(arr[0]);
int ans=BinarySearch(arr,length,target);
cout<<ans;

}

// return the index 
// retuen -1 if it doed not found
static int BinarySearch(int arr[],int length,int target){
    int start=0;
    int end=length-1;

    while(start<=end){
        //find the middle element


        // int mid=(start+end)/2; prob when the array is of greater size which exceed the limit of int so we need to use
        // (start+end) may exceed int range
        int mid=start+(end-start)/2;    // this will give index of mid array 

        if(target<arr[mid]) {// will lie on the left side 
            end=mid-1;    
        }
        else if(target>arr[mid]){ // will lie on the right side
            start=mid+1;
        }
        else {
            // ans found
            return mid;
        }
}
return -1;

}
