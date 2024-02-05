#include<iostream>
using namespace std;
void reverse(string & s,int i,int j){
	//base case
	if(i>j)
		return;
		swap(s[i],s[j]);
		i++;
		j--;
		//recursive call
		reverse(s,i,j);
	
}
int main(){
	string name="ANSA";
	reverse(name,0,name.length() -1);
	cout<<name<<endl;
}
