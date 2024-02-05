#include<iostream>
using namespace std;
int  main(){
	int arr[10]={3,4,5,67,8,86,};
	cout<<"address of first memory block is"<<arr<<endl;
	//to gt the address of 1st index we can do like this
	//or can be done by &arr[0]
	cout<<*arr<<endl;
	cout<<*arr+1<<endl;
	
	char ch[6]="abcde";
	char *c=&ch[0];
	cout<<c<<endl;
	cout<<ch;
	
	
	
	
	return 0;
}
