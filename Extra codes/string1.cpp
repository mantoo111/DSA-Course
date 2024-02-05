#include<iostream>
#include<string.h>
using namespace std;
// C++ program to count the uppercase,
// lowercase, special characters 
// and numeric values
// Function to count uppercase, lowercase,
// special characters and numbers
void Count(string str)
{
	int upper = 0, lower = 0, number = 0, special = 0;
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			upper++;
		else if (str[i] >= 'a' && str[i] <= 'z')
			lower++;
		else if (str[i]>= '0' && str[i]<= '9')
			number++;
		else
			special++;
	}
	cout << "Upper case letters: " << upper << endl;
	cout << "Lower case letters : " << lower << endl;
	cout << "Number : " << number << endl;
	cout << "Special characters : " << special << endl;
}

// Driver function
int main()
{
	string str = "AnsaAbid";
	Count(str);
	return 0;
}



























//	string str1="asma";
//	string pattern="ma";
//	cout<<str1.find(pattern);
//	char str2[5]="abid";
	//strcpy(str2,str1);
	//cout<<"second string "<<str2;
//cout<<	strcat(str1,str2);
/*	cout<<"enter your name in the array";
	for(int i=0;i<5;i++){
		cin>>arr[i];
	}
	for(int i=0;i<5;i++){
		cout<<arr[i];
	}
	cout<<"length of array is"<<strlen(str1);//sizeof(arr/sizeof(arr[0]));
}*/

