#include<iostream>
using namespace std;
void QuickSort(int arr[], int low,int hi);
int main(){  
            // int arr[]={5,4,3,2,1};
            int arr[]={22,4,55,67,43,3};
            int length=sizeof(arr)/sizeof(arr[0]);
            QuickSort(arr,0,length-1);
            for (int i = 0; i < length; i++)
            {
                cout<<arr[i]<<" ";
            }
            
            
    }

void QuickSort(int arr[], int low,int hi){
    if(low>=hi){
        return;
    }
    // s and e -->> for swapping purpose   low and hi ---> tells us that which part of array u are working 

    int s=low;
    int e=hi;
    int m=s+(e-s) / 2;
    // here middle element is treated as pivot element
    int pivot =arr[m];

    // also a reason why if its already QuickSorted it wil not swap
    while (s<=e)
    {
        while (arr[s]< pivot)  
        {
            s++;
        }
        while (arr[e]> pivot)
        {
            e--;
        }
        
        if(s<=e){
            std::swap(arr[s],arr[e]);
            s++,e--;
        }
        
    }

    // now pivot is at the correct  index,please QuickSort two halves now
    QuickSort(arr,low,e);
    QuickSort(arr,s,hi);
}

