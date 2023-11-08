#include <iostream>

bool is_hacksaw(float arr[], const unsigned int size) {
	bool result = true;

	for (unsigned int i = 1; i < size - 1; i++) {
		result = result && ((arr[i] > arr[i - 1] && arr[i] > arr[i + 1])
			|| (arr[i] < arr[i - 1] && arr[i] < arr[i + 1]));
	}

	return result;

}

int main() {
	const unsigned int SIZE = 5;
	float arr[SIZE] = { 1, 5, 7, 6, 0 };
	float hacksaw[SIZE] = { 0, 1, -1, 5, 3 };

	std::cout << is_hacksaw(arr, SIZE) << std::endl;
	std::cout << is_hacksaw(hacksaw, SIZE) << std::endl;

	return 0;
}
