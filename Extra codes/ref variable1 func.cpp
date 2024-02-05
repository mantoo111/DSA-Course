#include<iostream>
using namespace std;
void update1(int n){
	n++;
}
void update2(int n){
	n++;
}
int main(){

	int n=5;
	cout<<"before value is"<<n<<endl;
	update2(n);
	cout<<"after value is"<<n;
	return 0;
}
