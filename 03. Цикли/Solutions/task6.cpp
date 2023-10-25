#include <iostream>

int main() {
	unsigned int number;
	std::cin >> number;

	for (unsigned int i = 2; i < number; i++) {
		bool is_prime = true;
		for (unsigned int j = 2; j < i; j++) {
			if (i % j == 0) {
				is_prime = false;
				break;
			}
		}
		if (is_prime) {
			std::cout << i << std::endl;
		}
	}

	return 0;
}
