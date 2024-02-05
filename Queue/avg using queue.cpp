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
int sum=0;
	int avg;
for(int i=0;i<4;i++){
	
	int result =dequeue();

	int sum=sum+result;
	 avg=sum/4;
		
	
}
cout<<"avg of deleted number is"<< avg ;
}

