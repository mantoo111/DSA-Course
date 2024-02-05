#include<iostream>
using namespace std;
int getmax(int a[], int n) {  
   int max = a[0];  
   for(int i = 1; i<n; i++) {  
      if(a[i] > max)  
         max = a[i];  
   }  
   return max;
}
void countsort(int a[],int n,int pos){
	int k=10;
	int count[k]={0};
	int b[n];
	for(int i=0;i<n;i++){
		++count[(a[i]/pos)%10];
	}

for(int i=1;i<k;i++){
	count[i]=count[i]+count[i-1];
	
}
for(int i=n-1;i>=0;i--){
	 b[--count[(a[i] / pos) % 10]] = a[i];
}
for  (int i=0;i<n;i++){//copying elements
	a[i]=b[i];
}
}



void radixsort(int a[],int n){
	int max=getmax(a,n);
	for(int pos=1;max/pos>0;pos*=10){
		countsort(a,n,pos);
	}
}

int main() {  
  int a[] = {181, 289, 390, 121, 145, 736, 514, 888, 122};  
  int n = sizeof(a) / sizeof(a[0]);  
  
  radixsort(a, n);  
  cout<<"After applying Radix sort,elements are "<<endl;  
   
  for (int i = 0; i < n; ++i) {  
    cout<< a[i]<<endl;  
  }  
  cout<<endl; 
}  
