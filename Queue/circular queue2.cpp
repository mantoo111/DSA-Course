#include<iostream>
using namespace std;//make changes accordingly
int f=-1;
int r=-1;
int queue[5];
int size=5;
void enqueue(int n){
	if(r==4){
		cout<<"queue overflow"<<endl;
	}
	else{
		if(r==4&&f!=0){
		r=-1;
		r++;
		queue[r]=n;
		if(f==-1){
			f=0;
		}                  //???????????????????????????????????????????
	}
}
}

void dequeue(){
	if(f<-1){                                         
		cout<<"queue underflow"<<endl;
	}
	else{
	
	cout<<"deleted items"<<	queue[f++];
		if(f==size){
			
			f=0;
		if(f-1==r){
			f =r=-1;
		}
		
	}
}
}
int main(){
	int val;
	for(int i=0;i<5;i++){
		cin>>val;
		enqueue(val);}
		dequeue();
	}
	

