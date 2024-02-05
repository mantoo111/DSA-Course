#include<iostream>
using namespace std;
int sum(int arr[],int sie){
	if(sie==0){
      return 0;
	}
	if(sie==1){
	  return arr[0];
	}
	
	int remaining=sum(arr+1,sie-1);
	int sum=arr[0]+remaining;
	return sum;
		
	
}
int main(){
	int arr[4]={2,5,6,8};
	int sie=4;
	int ans=sum(arr,sie);

	cout<<"sum of array is"<<ans<<endl;
	return 0;

}
