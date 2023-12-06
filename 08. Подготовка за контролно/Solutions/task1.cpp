#include <iostream>

int main() {
	size_t rows, cols;
	std::cin >> rows >> cols;
	int** matrix = new int* [rows];
	for (size_t i = 0; i < rows; i++)
	{
		matrix[i] = new int[cols];
		double sum = 0;
		for (size_t j = 0; j < cols; j++)
		{
			std::cin >> matrix[i][j];
			sum += matrix[i][j];
		}
		std::cout << sum / cols << std::endl;
	}

	for (size_t i = 0; i < rows; i++)
	{
		delete[] matrix[i];
	}
	delete[] matrix;
	return 0;
}
