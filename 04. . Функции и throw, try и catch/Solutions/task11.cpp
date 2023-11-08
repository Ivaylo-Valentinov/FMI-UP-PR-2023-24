#include <iostream>

int main() {
	int first_number, second_number;
	std::cin >> first_number >> second_number;

	std::cout << ((first_number ^ second_number) < 0 ? "true" : "false") << std::endl;
	return 0;
}
