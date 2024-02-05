/*Write a program to input some numbers into an array and to calculate their sum and
average using only Pointers to address array elements. Use dynamic memory
allocation Use new and delete operators for allocating and freeing the memory.*/
#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter the size of array"<<endl;
	cin>>n;
	int *arr=new int [n];
	cout<<"Enter the numbers "<<endl;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
int sum=0;
for(int i=0;i<n;i++){
	sum=sum+arr[i];
	
}
int avg;
cout<<"sum of array is"<<sum<<endl;
	for(int i=0;i<n;i++){
	avg=sum/n;
}
cout<<"Average of array is"<<avg;

delete[]arr;
return 0;
}
