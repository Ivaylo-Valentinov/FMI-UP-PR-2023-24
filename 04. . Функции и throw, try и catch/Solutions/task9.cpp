#include <iostream>

int main() {
	unsigned int number;
	std::cin >> number;

	std::cout << (1 << number) << std::endl;
	return 0;
}
