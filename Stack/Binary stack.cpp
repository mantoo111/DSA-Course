#include <iostream>
using namespace std;
int top=-1,i=0;
int *a = nullptr;
void pop()
{
	if(top==-1)
	{
		cout<<"Stack underflow"<<endl;
	}
	else
	{
		cout<<a[top];
		top--;
	}
}
void size(int no)
{
	int r;
	while(no!=0)
    {
    	r = no%2;
		no = no/2; 
    	 i= i+1;
    	
	}
	a = new int[i];	
}
void push(int r)
{
	if (top==i-1)
	{
		cout<<"stack overflow";
	}
	else
	
	{
		top++;
		a[top] = r;
	}
}
int main() {
	int n,r,n1;
	cout<<"Enter a number:"<<endl;
	cin>>n;
	n1 = n;                      
    size(n);
    while(n!=0)
    {
    	r = n%2; 
    	n = n/2; 
    	 i++;
    	 push(r);
	}
cout<<"Binary representation of "<<n1<<" is:"<<endl;
while(top!=-1)
{
	pop();
	}	
	
	
    return 0;
}


