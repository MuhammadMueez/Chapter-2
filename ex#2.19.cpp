#include <iostream>
using namespace std;

int main()
{
 int number1; 
 int number2;
 int number3;
 int smallest;
 int largest; 
	cout << "Input three different integers: ";
	cin >> number1 >> number2 >> number3; 
	
	 largest = number1; 

 if ( number2 > largest ) 
 largest = number2; 

 if ( number3 > largest ) 
 largest = number3; 
 smallest = number1;

 if ( number2 < smallest )
 smallest = number2;

if ( number3 < smallest )
 smallest = number3;

 cout << "Sum is " << number1 + number2 + number3<< "\nAverage is " << ( number1 + number2 + number3 ) / 3<< "\nProduct is " << number1 * number2 * number3<< "\nSmallest is " << smallest<< "\nLargest is " << largest << endl;
 }
