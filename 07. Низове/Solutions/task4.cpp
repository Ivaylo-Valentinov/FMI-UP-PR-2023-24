#include <iostream>

int** transpose(int** matrix, size_t rows, size_t cols, size_t& resultRows, size_t& resultCols) {
	resultRows = cols;
	resultCols = rows;

	int** result = new int* [resultRows];
	for (size_t i = 0; i < resultRows; i++)
	{
		result[i] = new int[resultCols];
		for (size_t j = 0; j < resultCols; j++)
		{
			result[i][j] = matrix[j][i];
		}
	}

	return result;
}


int main() {
	size_t rows, cols;
	std::cin >> rows >> cols;
	int** matrix = new int* [rows];
	for (size_t i = 0; i < rows; i++)
	{
		matrix[i] = new int[cols];
		for (size_t j = 0; j < cols; j++)
		{
			std::cin >> matrix[i][j];
		}
	}

	size_t resultRows = 0, resultCols = 0;
	int** result = transpose(matrix, rows, cols, resultRows, resultCols);

	for (size_t i = 0; i < resultRows; i++)
	{
		delete[] result[i];
	}
	delete[] result;

	for (size_t i = 0; i < rows; i++)
	{
		delete[] matrix[i];
	}
	delete[] matrix;
	return 0;
}
