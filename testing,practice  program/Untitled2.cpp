#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter  the size of array"<<endl;
	cin>>n;
	float *arr=new float [n];// Cast n to an integer
	cout<<"enter the elements "<<endl;
	for(int i=0;i<n;i++){
	
	cin>>arr[i];
}
cout<<"the elements are"<<endl;
for(int i=0;i<n;i++){
	
	cout<<arr[i];
}
delete[]arr;
}
