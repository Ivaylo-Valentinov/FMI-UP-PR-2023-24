#include <iostream>

int main() {
	unsigned int number, mirrored = 0;
	std::cin >> number;

	while (number != 0) {
		mirrored = 10 * mirrored + number % 10;
		number /= 10;
	}

	std::cout << mirrored << std::endl;
	return 0;
}
