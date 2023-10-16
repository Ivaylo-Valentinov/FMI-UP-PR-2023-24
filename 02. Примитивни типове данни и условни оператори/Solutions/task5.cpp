#include <iostream>

int main() {
	int number;
	unsigned int first_digit, second_digit, third_digit;

	std::cin >> number;

	number = number > 0 ? number : -number;

	first_digit = number / 100;
	second_digit = number / 10 % 10;
	third_digit = number % 10;

	float avg = (first_digit + second_digit + third_digit) / 3.0;
	std::cout << avg << std::endl;

	return 0;
}
