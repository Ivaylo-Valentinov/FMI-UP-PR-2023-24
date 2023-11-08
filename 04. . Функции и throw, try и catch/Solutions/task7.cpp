#include <iostream>

bool is_primary(size_t number) {
	if (number <= 1) {
		return false;
	}

	for (size_t i = 2; i < number; i++) {
		if (number % i == 0) {
			return false;
		}
	}

	return true;
}

void print_pairs(size_t number) {
	for (size_t i = 1; i < number; i++) {
		for (size_t j = i; j < number; j++) {
			if (is_primary(i) && is_primary(j) && i + j == number) {
				std::cout << "<" << i << ", " << j << ">\n";
			}
		}
	}
}

int main() {
	size_t n;
	std::cin >> n;
	print_pairs(n);
	return 0;
}
