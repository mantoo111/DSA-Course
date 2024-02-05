//using pointers sum the array elements
#include<iostream>
using namespace std;
int main(){
	
	int*arr=new int[5];// allocates an integer array of size 5 and assigns its address to the pointer arr
	cout<<"enter the elements of array";
	for(int i=0;i<5;i++){
        cin>>arr[i];
}
	int sum=0;
	for(int i=0;i<5;i++){
		sum=sum+arr[i];
	}
	cout<<"sum of array is "<<sum;
	delete[]arr;
	return 0;
}
/*#include<iostream>
using namespace std;
                
int main(){  
        int n,sum=0,prod=1;
        cout<<"Enter the number of input u want to sum : ";
        cin>>n;
       int *p=new int[n];
        cout<<"Enter elements in array : "<<endl;
        for (int i = 0; i < n; i++)
        {
        cin>>p[i];
        }
        for (int i = 0; i < n; i++)
        {
            sum=sum+p[i];
            prod=prod*p[i];
        }
        cout<<"Sum of array is : "<<sum<<endl;
        cout<<"Prod of array is : "<<prod<<endl;

        delete[] p; // clear memory
    }*/
