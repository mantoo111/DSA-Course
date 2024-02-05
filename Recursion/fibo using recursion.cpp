#include<iostream>//code for fabonachi sries 
using namespace std;
int fibo(int n){
	if(n==0)
	  return 0;

	if(n==1)
	  return 1;
	else
	
	  return fibo(n-1)+fibo(n-2);	//this R.R is used for reaching nth stairs
	  }
int main(){
	int n;
	cout<<"Enter the number "<<endl;
	cin>>n;
	int ans;
	ans=fibo(n);
	cout<<ans;
}
