#include<iostream>
using namespace std;
bool checkpalindrom(const char a[],int n){
	int s=0;
	int e=n-1;
	while(s<=e){
		if(a[s]!=a[e]){
			return false;
		}
		else{
			s++;
			e--;
		}
	}
	return true;//means it is palindrom
}
int main(){
	cout<<"palindome or not"<<checkpalindrom("noon",4);
}
