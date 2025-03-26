int something_something(int number) {
	if (number < 10) {
		return number;
	}
	int d = number % 10;
	number = something_something(number / 10);
	return something_something(number) > number ? something_something(number) : number;
}