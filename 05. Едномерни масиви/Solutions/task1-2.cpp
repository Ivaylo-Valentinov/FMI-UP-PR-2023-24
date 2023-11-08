#include <iostream>
#include <cassert>

void sort(int arr[], const int size) {
	assert(size >= 0);

	for (unsigned int i = 0; i < size; i++)
	{
		unsigned int index = i;
		for (unsigned int j = i + 1; j < size; j++)
		{
			if (arr[index] > arr[j]) {
				index = j;
			}
		}
		int temp = arr[i];
		arr[i] = arr[index];
		arr[index] = temp;
	}
}

int find_index(int arr[], const int size, const int element) {
	assert(size >= 0);

	int left = 0;
	int right = size - 1;
	while (left <= right) {
		int middle = (left + right) / 2;

		if (arr[middle] == element)
			return middle;

		if (arr[middle] < element)
			left = middle + 1;

		else
			right = middle;
	}

	return -1;
}

int main() {
	const int SIZE = 5;
	int arr[SIZE] = { 1, 5, 7, 6, 0 };

	sort(arr, SIZE);

	for (unsigned int i = 0; i < SIZE; i++)
	{
		std::cout << arr[i] << " ";
	}

	std::cout << find_index(arr, SIZE, 0);
	return 0;
}
