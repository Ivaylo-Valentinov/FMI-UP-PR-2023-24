#include <iostream>
#include <cassert>

int main() {
	size_t rows, cols, maxRow = 0, maxCol = 0;
	std::cin >> rows >> cols;
	assert(rows >= 2 && cols >= 2);

	int** matrix = new int* [rows];
	for (size_t i = 0; i < rows; i++)
	{
		matrix[i] = new int[cols];
		for (size_t j = 0; j < cols; j++)
		{
			std::cin >> matrix[i][j];
		}
	}
	int maxSum = matrix[0][0] + matrix[0][1] + matrix[1][0] + matrix[1][1];
	for (size_t i = 0; i < rows - 1; i++)
	{
		for (size_t j = 0; j < cols -1; j++)
		{
			int tempSum = matrix[i][j] + matrix[i][j + 1] + matrix[i + 1][j] + matrix[i + 1][j + 1];
			if (maxSum < tempSum) {
				maxSum = tempSum;
				maxRow = i;
				maxCol = j;
			}
		}
	}
	std::cout << maxSum << std::endl;
	std::cout << matrix[maxRow][maxCol] << " " << matrix[maxRow][maxCol + 1] << " " << matrix[maxRow + 1][maxCol] << " " << matrix[maxRow + 1][maxCol + 1] << std::endl;

	for (size_t i = 0; i < rows; i++)
	{
		delete[] matrix[i];
	}
	delete[] matrix;
	return 0;
}
