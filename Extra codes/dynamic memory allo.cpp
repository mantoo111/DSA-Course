#include<iostream>
using namespace std;
int getsum(int*arr,int n){
	int sum=0;
	for(int i=0;i<n;i++){
		sum=sum+arr[i];
}
return sum;
}
int main(){
	int n;
	cin>>n;
	//when to make variable size array do this
//int*arr in stack memory
	int*arr=new int (n);//heap memory
//taking variable
for(int i=0;i<n;i++){
	cin>>arr[i];
}
int ans=getsum(arr,n);
cout<<ans;
	return 0;
}
