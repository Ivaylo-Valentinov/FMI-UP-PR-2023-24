#include <iostream>
#include <cassert>

int main() {
	size_t n = 0, seat;
	for (size_t i = 0; i < 5; i++) {
		std::cin >> seat;
		assert(seat >= 1 && seat <= 10);
		n = n | (1 << seat);
	}

	std::cin >> seat;
	assert(seat >= 1 && seat <= 10);
	std::cout << ((n & (1 << seat)) != 0) << std::endl;
	return 0;
}
