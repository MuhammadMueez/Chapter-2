#include <iostream>
using namespace std;
int main()
{
	int number1;
	int number2;
	
	cout << "Enter two integers: ";
	cin >> number1 >> number2;
	
	 if ( number1 == number2 )
	   cout << "These numbers are equal." << endl;
	   
	 if ( number1 > number2 )
	   cout << number1 << " is larger." << endl;

	 if ( number2 > number1 )
	   cout << number2 << " is larger." << endl;
} 
