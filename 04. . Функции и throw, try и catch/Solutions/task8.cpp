#include <iostream>

int main() {
	int number;
	std::cin >> number;

	std::cout << ((number & 1) == 0 ? "even" : "odd") << std::endl;
	return 0;
}
