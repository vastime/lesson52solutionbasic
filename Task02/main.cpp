#include <iostream>
using namespace std;

bool is_power_of_three( int number);

int main() {

	int number;

	cout << "Input your number to know is power of number: ";
	cin >> number;



	cout << " Is power of three :  " << (is_power_of_three(number) == false ? "No" : "Yes") << endl;


	return 0;
}