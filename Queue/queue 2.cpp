#include<iostream>
using namespace std;
int f=-1;
int r=-1;
int queue[5];
void enqueue(int n){
	if(r==4){
		cout<<"queue overflow"<<endl;
	}
	else{
		r++;
		queue[r]=n;
		if(f==-1){
			f=0;
		}
	}
}

void dequeue(){
	if(f<-1){
		cout<<"queue underflow"<<endl;
	}
	else{
	
	cout<<	queue[f];

		if(f==r){
			
			f=-1;
			r=-1;
		}
		else{
			f++;
		}
		
				
		
	}
}
int main(){
	int val;
	for(int i=0;i<5;i++){
		cin>>val;
		enqueue(val);}
		for(int i=0;i<5;i++){
		dequeue();
	}
}
	

