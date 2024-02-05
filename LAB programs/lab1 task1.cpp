//Write a program to initialize a float array of size 10 with values :
//1.0 , 1.1 , 2.2 … 9.9 using Pointers.
#include<iostream>
using namespace std;
int main(){
	float arr[10];
	float *ptr;
	ptr=arr;
	*ptr=1.0;//zero index
	ptr=arr+1;
	*ptr=1.1;
	ptr=arr+2;
	*ptr=2.2;
	ptr=arr+3;
	*ptr=3.3;
	ptr=arr+4;
	*ptr=4.4;
	ptr=arr+5;
	*ptr=5.5;
	ptr=arr+6;
	*ptr=6.6;
	ptr=arr+7;
	*ptr=7.7;
	ptr=arr+8;
	*ptr=8.8;
	ptr=arr+9;
	*ptr=9.9;
	for(int i=0;i<10;i++)
{
	cout<<arr[i]<<endl;
}
return 0;	
}
