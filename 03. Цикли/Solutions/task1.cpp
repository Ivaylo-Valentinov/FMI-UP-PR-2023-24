#include <iostream>

int main() {
	int number;
	std::cin >> number;
	int min = number, max = number;

	while (number != 0) {
		min = min > number ? number : min;
		max = max < number ? number : max;
		std::cin >> number;
	}

	std::cout << min << std::endl;
	std::cout << max << std::endl;
	return 0;
}
