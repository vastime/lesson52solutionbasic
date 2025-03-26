bool is_power_of_three(int number) {
	if (number == 1) {
		return true;
	}
	if (number % 3 != 0) {
		return false;
	}
	if (number == 1) {
		return true;
	}
	return is_power_of_three(number / 3);
}