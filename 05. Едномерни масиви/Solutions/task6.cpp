#include <iostream>

int main() {
	const unsigned int SIZE = 1000;
	bool arr[SIZE];
	for (unsigned int i = 0; i < SIZE; i++) {
		arr[i] = false;
	}

	unsigned int n;

	std::cin >> n;

	for (unsigned int i = 0; i < n; i++) {
		int position;
		std::cin >> position;

		if (position > 0) {
			arr[position - 1] = true;
		}
		else if (position < 0) {
			arr[(-position) - 1] = false;
		}
		else {
			std::cout << "0 is not a valid index\n";
		}
	}

	for (unsigned int i = 0; i < SIZE; i++) {
		if (arr[i]) {
			std::cout << i + 1 << " ";
		}
	}
	return 0;
}
