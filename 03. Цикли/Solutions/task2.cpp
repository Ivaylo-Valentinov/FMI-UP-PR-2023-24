#include <iostream>

int main() {
	unsigned int n;
	std::cin >> n;
	unsigned int f0 = 0, f1 = 1;

	if (n == 1) {
		std::cout << f0;
		return 0;
	}
	if (n == 2) {
		std::cout << f1;
		return 0;
	}

	for (int i = 2; i < n; i++) {

		f1 = f1 + f0;
		f0 = f1 - f0;
	}

	std::cout << f1;
	return 0;
}
