#include<iostream>
using namespace std;
int getsum(int *arr,int n){//or we can we this arr[]
int sum=0;
for(int i=0;i<n;i++){
	sum=sum+arr[i];
}
return sum;
}
int main(){
	int n;
	cout<<"enter the number "<<endl;
	cin>>n;
	int *arr=new int[n];
	cout<<"enter the elements for array "<<endl;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int ans=getsum(arr,n);
	cout<<"answer is "<<ans;
	return 0;
}
