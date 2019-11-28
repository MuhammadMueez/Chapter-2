#include <iostream>
using namespace std;
int main()
{
	char symbol;
	cout << "Enter a character: ";
	cin >> symbol; 
	cout << symbol << "'s integer equivalent is "<< static_cast< int >( symbol ) << endl;
}
