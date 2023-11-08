#include <iostream>
#include <cassert>

int count_digits(int number) {
	if (number == 0) {
		return 1;
	}

	int count = 0;
	while (number > 0) {
		number /= 10;
		count++;
	}
	return count;
}


int count_occurences(int number, int digit) {
	assert(digit >= 0 && digit <= 9);
	if (number == 0) {
		return number == digit ? 1 : 0;
	}

	int count = 0;
	while (number > 0) {
		if (digit == number % 10) {
			count++;
		}
		number /= 10;
	}
	return count;
}

int main() {
	int a, b;
	std::cin >> a >> b;
	std::cout << count_digits(a) << std::endl << count_occurences(a, b) << std::endl;
	for (size_t i = 0; i < 10; i++) {
		int digit_count = count_occurences(a, i);
		for (size_t j = 0; j < digit_count; j++) {
			std::cout << i;
		}
	}
	std::cout << std::endl;
	return 0;
}
