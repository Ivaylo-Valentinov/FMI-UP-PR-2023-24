#include <iostream>
#include <cassert>

const int MAX_SIZE = 1000;

bool hasProperty1(int arr[], const int size) {
	if (size == 0)
		return true;

	bool isEven, prevIsEven;
	isEven = arr[0] % 2 == 0;
	for (int i = 1; i < size; i++) {
		prevIsEven = isEven;
		isEven = arr[i] % 2 == 0;
		if (prevIsEven == isEven)
			return false;
	}

	return true;
}

bool hasProperty2(int arr[], const int size) {
	for (int i = 2; i < size - 1; i += 2) {
		if (arr[i] != arr[i - 1] + arr[i + 1])
			return false;
	}

	return true;
}

int countDigits(int number) {
	if (number == 0)
		return 1;

	int count = 0;
	while (number > 0) {
		count++;
		number /= 10;
	}

	return count;
}

bool containsNumber(int number, int digits) {
	if (number == 0 && digits == 0)
		return true;

	number = number >= 0 ? number : -number;
	digits = digits >= 0 ? digits : -digits;

	int digitCount = countDigits(digits);
	int residue = 1;

	for (int i = 0; i < digitCount; i++) {
		residue *= 10;
	}

	while (number > 0) {
		if (number % residue == digits)
			return true;

		number /= 10;
	}

	return false;
}

bool hasProperty3(int arr[], const int size) {
	for (int i = 0; i < size; i++) {
		if (!containsNumber(arr[i], i))
			return  false;
	}

	return true;
}

int main() {
	int arr[MAX_SIZE];
	int size;

	std::cin >> size;
	assert(size <= MAX_SIZE);

	for (int i = 0; i < size; i++)
	{
		std::cin >> arr[i];
	}

	if (hasProperty1(arr, size)) {
		std::cout << "Has property 1!\n";
	}

	if (hasProperty2(arr, size)) {
		std::cout << "Has property 2!\n";
	}

	if (hasProperty3(arr, size)) {
		std::cout << "Has property 3!\n";
	}
}
