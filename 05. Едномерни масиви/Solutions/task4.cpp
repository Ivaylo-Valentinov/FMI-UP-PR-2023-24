#include <iostream>

void sort(float arr[], const unsigned int size) {
	for (unsigned int i = 0; i < size; i++) {
		unsigned int index = i;
		for (unsigned int j = i + 1; j < size; j++) {
			if (arr[index] > arr[j]) {
				index = j;
			}
		}
		float temp = arr[i];
		arr[i] = arr[index];
		arr[index] = temp;
	}
}

int main() {
	const unsigned int SIZE = 5;
	unsigned int n = SIZE;
	unsigned int m = 3;
	float arr[SIZE] = { 1, 5, 7, 6, 0 };

	sort(arr, SIZE);

	float min_sum = 0;
	float max_sum = 0;

	for (unsigned int i = 0; i < m; i++)
	{
		min_sum += arr[i];
		max_sum += arr[n - m + i];
	}

	std::cout << min_sum << std::endl;
	std::cout << max_sum << std::endl;
	return 0;
}
