int sum_of_number_digits(int number) {
	int sum = 0;
	if (number < 0) {
		number = -number;
	}
	if (number < 10) {
		return number;
	}

	int d = number % 10;

	return sum_of_number_digits(number / 10) + d;
}
int count_of_number_digits(int number) {
	if (number < 10) {
		return 1;
	}

	return sum_of_number_digits(number / 10);

}