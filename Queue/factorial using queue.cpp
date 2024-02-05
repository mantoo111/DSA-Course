#include<iostream>
using namespace std;
int f=-1;
int r=-1;
int arr[4];
void enqueue(int val){
	if(r>=3){
		cout<<"queue overflow"<<endl;
		
	}
	else{
		r++;
		arr[r]=val;
		if(f==-1){
			f=0;
		}
	}
}
int dequeue(){
	if(f<0){
		cout<<"queue underflow"<<endl;
		
	}
	else{
	
		if(f==r){
		f==-1;
		r==-1;
		}
		else{
			f++;
		}
		return arr[f];
	}
}
int main(){
	for(int i=0;i<4;i++){
	int val;
	cin>>val;
	enqueue(val);
}
int  factorial=1;

	
	int result =dequeue();

	for(int j=1;j<=result;j++)
	{
	factorial=factorial*j;
	
}
cout << "Factorial of number is"<< factorial<<endl;
		
return 0;	
}



