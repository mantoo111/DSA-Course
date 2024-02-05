#include<iostream>
using namespace std;
int range(int l,int r){
	if(l>r){
      return 0;
	}
	
int	sum=l+range(l+1,r);
return sum;
	
	
	
}
int main(){
	int left=-2;
	int right=10;
	cout<<range(left,right);
	return 0;

}
