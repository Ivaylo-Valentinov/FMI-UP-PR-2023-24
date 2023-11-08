#include <iostream>

int main() {
	int first_number, second_number;
	std::cin >> first_number >> second_number; // 0011 1010

	first_number = first_number ^ second_number; //0011 ^ 1010 = 1001
	second_number = first_number ^ second_number; //1001 ^ 1010 = 0011
	first_number = first_number ^ second_number; //1001 ^ 0011 = 1010

	std::cout << first_number << " " << second_number << std::endl; // 1010 0011
	return 0;
}
