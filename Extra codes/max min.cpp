#include<iostream>
using namespace std;
int getmax(int num[] ,int n){
	int max= INT_MIN;
	for(int i=0;i<n;i++){
		if(num[i]>max){
			max=num[i];
		}
	}
	return max;
}
int getmin(int num[] ,int n){//here n is the size
	int min= INT_MAX;
	for(int i=0;i<n;i++){
		if(num[i]<min){
			min=num[i];
		}
	}
	return min;
}
int main(){
	cout<<"welcome back to c++ again";
	int size;
	cin>>size;
	int num[100];//always remember not to set a variable  in [];
for(int i=0;i<size;i++){
	
	cin>>num[i];}


cout<<"greater value is "<<getmax(num, size)<<endl;
cout<<"smaller value is "<<getmin(num, size)<<endl;
}
