#include<iostream>
using namespace std;
void saydigit(int n,  string arr[]){
	//base con
	if(n==0){
		return;
	}
	
	//processing
	int digit=n%10;
	n=n/10;
	
	
	saydigit(n,arr);//recursive call
	cout<<arr[digit];

}
int main(){
string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
int n;
cout<<"Enter the number for which you want to find the factorial of"<<endl;
cin>>n;
cout<<endl;
saydigit(n,arr);
cout<<endl;
	
}
