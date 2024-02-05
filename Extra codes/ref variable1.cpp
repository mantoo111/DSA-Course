#include<iostream>
using namespace std;
int main(){
	int i=5;
	//creating ref  variable
	int &j=i;
	cout<<i<<endl;
	i++;
	cout<<i<<endl;
	cout<<j;
	return 0;
	
}
