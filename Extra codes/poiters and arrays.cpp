#include<iostream>
using namespace std;
int main(){
	int marks[]={1,3,4,5,6,8,9};
	int*p=marks;
	cout<<"numberat index 0 is"<<*p<<endl;
	cout<<"numberat index 1 is"<<*(p+1)<<endl;
	cout<<"numberat index 2 is"<<*(p+2)<<endl;
	cout<<"numberat index 3 is"<<*(p+3)<<endl;
	//the above can be done using for loop
	return 0;
}
