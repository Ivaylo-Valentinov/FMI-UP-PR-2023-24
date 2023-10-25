#include <iostream>

int main() {
	unsigned int number;
	std::cin >> number;

	if (number <= 1) {
		std::cout << "NO\n";
	}

	for (unsigned int i = 2; i < number; i++) {
		if (number % i == 0) {
			std::cout << "NO\n";
			return 0;
		}
	}

	std::cout << "YES\n";
	return 0;
}
