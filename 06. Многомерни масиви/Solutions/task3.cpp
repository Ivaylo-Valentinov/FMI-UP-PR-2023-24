#include <iostream>

const int SIZE = 5;

void printDiagonals(int arr[][SIZE], int size) {
	//primary
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i][i] << " ";
	}
	std::cout << std::endl << std::endl;

	//above
	for (int i = 1; i < size; i++)
	{
		for (int j = 0, k = i; j < size && k < size; j++, k++)
		{
			std::cout << arr[j][k] << " ";
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;

	//below
	for (int i = 1; i < size; i++)
	{
		for (int j = 0, k = i; j < size && k < size; j++, k++)
		{
			std::cout << arr[k][j] << " ";
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;

	//secondary
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i][size - i - 1] << " ";
	}
	std::cout << std::endl << std::endl;

	//above
	for (int i = size - 2; i >= 0; i--)
	{
		for (int j = 0, k = i; j < size && k >= 0; j++, k--)
		{
			std::cout << arr[j][k] << " ";
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;

	//below
	for (int i = 1; i < size; i++)
	{
		for (int j = size - 1, k = i; j >= 0 && k < size; j--, k++)
		{
			std::cout << arr[k][j] << " ";
		}
		std::cout << std::endl;
	}
}

int main() {
	int arr[SIZE][SIZE] = {
		{1,  2,  3,  4,  5},
		{11, 12, 13, 14, 15},
		{21, 22, 23, 24, 25},
		{31, 32, 33, 34, 35},
		{41, 42, 43, 44, 45},
	};

	printDiagonals(arr, SIZE);

	return 0;
}
