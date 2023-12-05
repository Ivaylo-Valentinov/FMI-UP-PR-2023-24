#include <iostream>
#include <cassert>

int** add(int** matrix1, size_t rows1, size_t cols1, int** matrix2, size_t rows2, size_t cols2, size_t& resultRows, size_t& resultCols) {
	assert(rows1 == rows2 && cols1 == cols2);
	resultRows = rows1;
	resultCols = cols1;

	int** result = new int* [resultRows];
	for (size_t i = 0; i < resultRows; i++)
	{
		result[i] = new int[resultCols];
		for (size_t j = 0; j < resultCols; j++)
		{
			result[i][j] = matrix1[i][j] + matrix2[i][j];
		}
	}

	return result;
}

int** multiplyByScalar(int** matrix, size_t rows, size_t cols, int scalar, size_t& resultRows, size_t& resultCols) {
	resultRows = rows;
	resultCols = cols;

	int** result = new int* [resultRows];
	for (size_t i = 0; i < resultRows; i++)
	{
		result[i] = new int[resultCols];
		for (size_t j = 0; j < resultCols; j++)
		{
			result[i][j] = matrix[i][j] * scalar;
		}
	}

	return result;
}


int main() {
	size_t rows1, cols1, rows2, cols2;
	std::cin >> rows1 >> cols1 >> rows2 >> cols2;
	int** matrix1 = new int* [rows1];
	for (size_t i = 0; i < rows1; i++)
	{
		matrix1[i] = new int[cols1];
		for (size_t j = 0; j < cols1; j++)
		{
			std::cin >> matrix1[i][j];
		}
	}

	int** matrix2 = new int* [rows2];
	for (size_t i = 0; i < rows2; i++)
	{
		matrix2[i] = new int[cols2];
		for (size_t j = 0; j < cols2; j++)
		{
			std::cin >> matrix2[i][j];
		}
	}

	size_t resultRows = 0, resultCols = 0;
	int** result = add(matrix1, rows1, cols1, matrix2, rows2, cols2, resultRows, resultCols);


	for (size_t i = 0; i < resultRows; i++)
	{
		delete[] result[i];
	}
	delete[] result;

	for (size_t i = 0; i < rows2; i++)
	{
		delete[] matrix2[i];
	}
	delete[] matrix2;

	for (size_t i = 0; i < rows1; i++)
	{
		delete[] matrix1[i];
	}
	delete[] matrix1;
	return 0;
}
