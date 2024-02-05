#include<iostream>
using namespace std;
int range(int l,int r){
	if(l>r){
      return 0;
	}
	cout<<l<<endl;
	range(l+1,r);	
}
int main(){
int left=-2;
	int right=10;
	range(left,right);
	return 0;

}

