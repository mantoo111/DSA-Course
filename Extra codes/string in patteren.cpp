#include<iostream>
using namespace std; 
int main(){
	int n;
	cout<<"enter"<<endl;
	cin>>n;
	string str="ASMA";
	for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= i; j++) {
            cout <<str[j];
            
        }
        
        std::cout << "\n";
    }
	
}





/*#include <iostream>

int main() {
    int n;

    std::cout << "Enter the number of rows: ";
    std::cin >> n;

    char currentChar = 'A';

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            std::cout << currentChar;
            currentChar++;
        }
        currentChar = 'A'; // Reset the character for the next row
        std::cout << "\n";
    }

    return 0;
}*/

