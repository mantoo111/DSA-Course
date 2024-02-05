#include<iostream>
using namespace std;
int main(){
	char arr[10] = {'2','3','4','6','8','9','4','1','8','0'}; 
    char *p = &arr[3];   //pointing to 3rd index
*p = '!';
cout<<*p<<endl;
cout<<p<<endl;
return 0;
}
