#include <iostream> 
using namespace std; 

int main()
{
	int number;
	
	cout << "Enter an integer: ";
	cin >> number; 

		if ( number % 2 == 0 )
		  cout << "The integer " << number << " is even." << endl;

		if ( number % 2 != 0 )
		  cout << "The integer " << number << " is odd." << endl;
} 
