#include <iostream>
#include <cassert>

void mergeSorted(int* arr1, size_t size1, int* arr2, size_t size2, int* result) {
	size_t i = 0, j = 0, k = 0;
	while (i < size1 && j < size2) {
		if (arr1[i] < arr2[j]) {
			result[k++] = arr1[i++];
		}
		else {
			result[k++] = arr2[j++];
		}
	}
	while (i < size1) {
		result[k++] = arr1[i++];
	}
	while (j < size2) {
		result[k++] = arr2[j++];
	}
}

int main() {
	size_t size1, size2;
	std::cin >> size1 >> size2;
	assert(size1 > 0 && size2 > 0);

	int* arr1 = new int[size1];
	int* arr2 = new int[size2];

	for (size_t i = 0; i < size1; i++)
	{
		std::cin >> arr1[i];
	}
	for (size_t i = 0; i < size2; i++)
	{
		std::cin >> arr2[i];
	}

	int* result = new int[size1 + size2];

	mergeSorted(arr1, size1, arr2, size2, result);

	for (size_t i = 0; i < size1 + size2; i++)
	{
		std::cout << result[i] << " ";
	}

	delete[] result;
	delete[] arr2;
	delete[] arr1;
	return 0;
}
