#include<iostream>
using namespace std;
int factorial(int n){
	if(n==0){//if we dont write base condition then we get simultation fault and stack overflow ho jati ha
	  return 1;
}
	else{
	
	  return n*factorial(n-1);	//for power 2*power(n-1)
}
}
int main(){
	int n;
	cout<<"Enter the number for which you want to find the factorial of"<<endl;
	cin>>n;
	int ans;
	ans=factorial(n);
	cout<<ans;
}
