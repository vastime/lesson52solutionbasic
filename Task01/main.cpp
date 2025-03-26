#include <iostream>
using namespace std;

int sum_of_number_digits(int number);
int count_of_number_digits(int number);

int main() {
	
	int number;

	cout << "Input your number: ";
	cin >> number;


	cout << "Sum of number digits is: " << sum_of_number_digits(number) << endl;
	cout << "Count of number digits is: " << count_of_number_digits(number) << endl;

	return 0;
}