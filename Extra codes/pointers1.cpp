#include<iostream>
using namespace std;
void print(int *p){//pointers in functions
	cout<<*p<<endl;
}
int  main(){
	int value=5;
	int *p=&value;
	print(p);
	
	
	
	
	return 0;
}
